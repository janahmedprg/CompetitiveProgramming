#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int WIDTH = 56;
const int HEIGHT = 56;
stack<pair<int, pair<int,int>>> placed_order;
vector<bool> placed_pieces(13);
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

bool place_piece(pair<int,int> xy, pair<int,int> piece, int id) {
    if (id < 0) {
        piece = {piece.second, piece.first};
    }
    if (piece.first + xy.first >= HEIGHT || piece.second + xy.second >= WIDTH) {
        return false;
    }
    bool flag = 0;
    for (int i = xy.first; i < piece.first  + xy.first; ++i) {
        if (flag != 0) {
            break;
        }
        for (int j = xy.second; j < piece.second + xy.second; ++j) {
            if (board[i][j] != 0) {
                flag = board[i][j];
                break;
            }
            else {
                board[i][j] = id;
            }
        }
    }
    if (flag != 0) {
        for (int i = xy.second; i < piece.second + xy.second; ++i) {
            if (board[xy.first][i] != flag) {
                board[xy.first][i] = 0;
            }
            else {
                return false;
            }
        }
    }
    placed_pieces[id] = true;
    placed_order.push({id, xy});
    return true;
}

void remove_last_piece() {
    pair<int, pair<int,int>> last_move = placed_order.top();
    int id = last_move.first;
    pair<int, int> xy = last_move.second;
    placed_order.pop();
    pair<int,int> piece = pieces[abs(id) - 1];
    if (id < 0) {
        piece = {piece.second, piece.first};
    }
    for (int i = xy.first; i < piece.first  + xy.first; ++i) {
        for (int j = xy.second; j < piece.second + xy.second; ++j) {
            board[i][j] = 0;
        }
    }
    placed_pieces[id] = false;
    return;
}

void dfs_solve(int index, pair<int, int> xy){   
    if (place_piece(xy, pieces[index], index + 1) == true) {
        for(auto x:board){
            cout<<"[";
            for(ll y: x){
                if (y < 10) {
                    cout<<0;
                }
                cout<<y<<", ";
            }
            cout<<"]\n";
        }
        cout<<"--------------------------------------------------------------------------------------------------------------------------------------\n";
        if (placed_order.size() == pieces.size()) {
            return;
        }
        pair<int, int> new_xy = {-1, -1};
        int x = xy.first;
        int y = (xy.second + pieces[index].second);
        while (new_xy.first == -1) {
            if (y == WIDTH) {
                y = 0;
                x += 1;
            }

            if (board[x][y] == 0) {
                new_xy = {x,y};
            }

            y += 1;
        }
        for (int i = 0; i < pieces.size(); ++i) {
            if (placed_order.size() == pieces.size()) {
                return;
            }
            if (i == index || placed_pieces[i+1] == true) {
                continue;
            }
            dfs_solve(i, new_xy);
        }
    }
    if (placed_order.size() == pieces.size()) {
        return;
    }
    remove_last_piece();
    if (place_piece(xy, pieces[index], -(index + 1)) == true) {
        for(auto x:board){
            cout<<"[";
            for(ll y: x){
                if (y < 10) {
                    cout<<0;
                }
                cout<<y<<", ";
            }
            cout<<"]\n";
        }
        cout<<"--------------------------------------------------------------------------------------------------------------------------------------\n";
        if (placed_order.size() == pieces.size()) {
            return;
        }
        pair<int, int> new_xy = {-1, -1};
        int x = xy.first;
        int y = (xy.second + pieces[index].second);
        while (new_xy.first == -1) {
            if (y == WIDTH) {
                y = 0;
                x += 1;
            }
            if (board[x][y] == 0) {
                new_xy = {x,y};
            }

            y += 1;
        }
        for (int i = 0; i < pieces.size(); ++i) {
            if (placed_order.size() == pieces.size()) {
                return;
            }
            if (i == index || placed_pieces[i+1] == true) {
                continue;
            }
            dfs_solve(i, new_xy);
        }
    }
    if (placed_order.size() == pieces.size()) {
        return;
    }
    remove_last_piece();
}

int main()
{
    for(int i = 0; i < 12; ++i) {
        dfs_solve(i, {0, 0});
        if (placed_order.size() == 12) {
            break;
        }
    }
    for(auto x:board){
        cout<<"[";
        for(ll y: x){
            if (y < 10) {
                cout<<0;
            }
            cout<<y<<", ";
        }
        cout<<"]\n";
    }
    cout<<"--------------------------------------------------------------------------------------------------------------------------------------\n";

    return 0;
}