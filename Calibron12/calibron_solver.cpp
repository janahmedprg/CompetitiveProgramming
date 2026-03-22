#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int WIDTH = 56;
const int HEIGHT = 56;
vector<pair<int, pair<int,int>>> placed_order;
vector<vector<int>> board(HEIGHT, vector<int>(WIDTH, 0));
vector<pair<int,int>> pieces = {
    {21, 14},
    {17, 14},
    {21, 18},
    {32, 10},
    {21, 14},
    {10, 7},
    {14, 4},
    {21, 18},
    {28, 6},
    {28, 14},
    {32, 11},
    {28, 7}
};
vector<bool> placed_pieces(pieces.size()+1, false);

bool compareArea(pair<int, int> a, pair<int, int> b) {
    if (a.first * a.second < b.first * b.second) {
        return true;
    }
    else {
        return false;
    }
}

pair<int, int> get_next_empty_pos() {
    for (int i = 0; i< HEIGHT; ++i) {
        for (int j = 0; j < WIDTH; ++j) {
            if (board[i][j] == 0) {
                return {i,j};
            }
        }
    }
    return {-1, -1};
}



bool place_piece(const pair<int,int>& xy, int id) {
    pair<int, int> piece =  pieces[abs(id) - 1];
    int p_height = xy.first + ((id < 0) ? piece.second : piece.first);
    int p_width = xy.second + ((id < 0) ? piece.first : piece.second);

    if (p_height > HEIGHT || p_width > WIDTH) {
        return false;
    }

    for (int i = xy.first; i < p_height; ++i) {
        for (int j = xy.second; j < p_width; ++j) {
            if (board[i][j] != 0) {
                return false;
            } 
        }
    }

    for (int i = xy.first; i < p_height; ++i) {
        for (int j = xy.second; j < p_width; ++j) {
            board[i][j] = abs(id); 
        }
    }

    placed_order.push_back({id, {xy.first, xy.second}});
    placed_pieces[abs(id)] = true;
    return true;
}

void remove_last_piece() {
    auto [id, xy] = placed_order.back();
    placed_order.pop_back();

    pair<int, int> piece =  pieces[abs(id) - 1];
    int p_height = xy.first + ((id < 0) ? piece.second : piece.first);
    int p_width = xy.second + ((id < 0) ? piece.first : piece.second);

    for (int i = xy.first; i<p_height; ++i) {
        for (int j = xy.second; j<p_width; ++j) {
            board[i][j] = 0;
        }
    }

    placed_pieces[abs(id)] = false;
}

void dfs_solve(const int& index, const pair<int, int>& xy){
    
    if (place_piece(xy, index) == true) {
        pair<int, int> new_xy = get_next_empty_pos();
        for (int i = 1; i< placed_pieces.size(); ++i) {
            if (placed_order.size() == pieces.size()) {
                return;
            }
            if (!placed_pieces[i]) {
                dfs_solve(i, new_xy);
            } 
        } 

        if (placed_order.size() == pieces.size()) {
            return;
        }
        remove_last_piece();
    }


    if (place_piece(xy, -(index)) == true) {
        pair<int, int> new_xy = get_next_empty_pos();
        for (int i = 1; i< placed_pieces.size(); ++i) {
            if (placed_order.size() == pieces.size()) {
                return;
            }
            if (!placed_pieces[i]) {
                dfs_solve(i, new_xy);
            }
        }  
        
        if (placed_order.size() == pieces.size()) {
            return;
        }
        remove_last_piece();
    }
}

int main()
{
    for(int i = 1; i < placed_pieces.size(); ++i) {
        dfs_solve(i, {0, 0});
        if (placed_order.size() == pieces.size()) {
            break;
        }
    }

    for (int i = 0; i<HEIGHT; ++i) {
        for (int j = 0; j < WIDTH; ++j) {
            if (board[i][j] < 10) {
                cout<<0<<board[i][j] <<" ";
            } else {
                cout<<board[i][j]<< " ";
            }
        }
        cout<<"\n";
    }

    int orderCount = 1;
    for (const auto& [id, xy] : placed_order) {
        cout<<"Placement "<<orderCount<<": id="<<id<<", x="<<xy.first<<", y="<<xy.second<<"\n";
        orderCount += 1;
    }
    
    return 0;
} 