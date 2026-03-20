#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int WIDTH = 56;
const int HEIGHT = 56;
vector<pair<int, pair<int,int>>> placed_order;
vector<vector<int>> board(HEIGHT+1, vector<int>(WIDTH+1, 0));
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
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> right_empty_pos;
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> top_empty_pos;
vector<bool> placed_pieces(pieces.size()+1, false);
vector<vector<pair<int, int>>> reset(pieces.size()+1);


bool place_piece(pair<int,int>& xy, int id) {
    int x0 = xy.first;
    // Add width (if id is positive it's placed normally else it's placed rotated)
    int x1 = xy.first + ((id>0) ? pieces[id-1].first : pieces[abs(id)-1].second);

    int y0 = xy.second;
    // Add height (if id is positive it's placed normally else it's placed rotated)
    int y1 = xy.second + ((id>0) ? pieces[id-1].second : pieces[abs(id)-1].first);

    bool pushRight = true;
    vector<pair<int, int>> to_reset;
    for (const auto& [id, placed_xy] : placed_order) {
        int x0_prime = placed_xy.first;
        int x1_prime = placed_xy.first + ((id>0) ? pieces[id-1].first : pieces[abs(id)-1].second);

        int y0_prime = placed_xy.second;
        int y1_prime = placed_xy.second + ((id>0) ? pieces[id-1].second : pieces[abs(id)-1].first);

        if (!(x1 <= x0_prime || x1_prime <= x0 || y1 <= y0_prime || y1_prime <= y0) || x1 > WIDTH || y1 > HEIGHT) {
            return false;
        }

        if (x1 == x0_prime && y0 >= y0_prime && y0 < y1_prime) {
            pushRight = false;
        }

        if (y1_prime == y0 && x0_prime >= x0 && x0_prime < x1) {
            board[x0_prime][y1_prime] = 0;
            to_reset.push_back({x0_prime, y1_prime});
        }
    }
    reset[abs(id)] = to_reset;

    if (pushRight && x1 < WIDTH) {
        right_empty_pos.push({x1, y0});
        board[x1][y0] = 1;
    }

    if (y1 < HEIGHT) {
        top_empty_pos.push({y1, x0});
        board[x0][y1] = 1;
    }

    placed_order.push_back({id, {x0, y0}});
    placed_pieces[abs(id)] = true;
    return true;
}

void remove_last_piece() {
    auto [id, xy] = placed_order.back();
    placed_order.pop_back();
    int x0 = xy.first;
    // Add width (if id is positive it's placed normally else it's placed rotated)
    int x1 = xy.first + ((id>0) ? pieces[id-1].first : pieces[abs(id)-1].second);

    int y0 = xy.second;
    // Add height (if id is positive it's placed normally else it's placed rotated)
    int y1 = xy.second + ((id>0) ? pieces[id-1].second : pieces[abs(id)-1].first);

    board[x1][y0] = 0;
    board[x0][y1] = 0;
    placed_pieces[abs(id)] = false;
    for (const auto& [x, y] : reset[abs(id)]) {
        top_empty_pos.push({y,x});
        board[x][y] = 1;
    }
    reset[abs(id)].clear();
    return;
}

pair<int, int> get_next_empty_pos() {
    pair<int, int> new_xy;
    while (true) {
        if (right_empty_pos.empty()) {
            new_xy = top_empty_pos.top();
            top_empty_pos.pop();
            new_xy = {new_xy.second, new_xy.first};
        }
        else{
            new_xy = right_empty_pos.top();
            right_empty_pos.pop();
        }
        if (board[new_xy.first][new_xy.second] == 1) {
            return new_xy;
        }
    }
    return {-1, -1};
}

void dfs_solve(int index, pair<int, int> xy){
    int orderCount = 1;
    for (const auto& [id, xyp] : placed_order) {
        cout<<"Placement "<<orderCount<<": id="<<id<<", x="<<xyp.first<<", y="<<xyp.second<<"\n";
        orderCount += 1;
    }
    if (place_piece(xy, index) == true) {
        if (placed_order.size() == pieces.size()) {
            return;
        }
        pair<int, int> new_xy = get_next_empty_pos();
        if(new_xy.first == -1){
            return;
        }
        for (int i = 1; i< placed_pieces.size(); ++i) {
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
        if (placed_order.size() == pieces.size()) {
            return;
        }
        pair<int, int> new_xy = get_next_empty_pos();
        if(new_xy.first == -1){
            return;
        }
        for (int i = 1; i< placed_pieces.size(); ++i) {
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
        board[0][0] = 1;
        right_empty_pos.push({0,0});
        dfs_solve(i, {0, 0});
        if (placed_order.size() == pieces.size()) {
            break;
        }
    }

    int orderCount = 1;
    for (const auto& [id, xy] : placed_order) {
        cout<<"Placement "<<orderCount<<": id="<<id<<", x="<<xy.first<<", y="<<xy.second<<"\n";
        orderCount += 1;
    }

    return 0;
} 