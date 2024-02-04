#include<bits/stdc++.h>
using namespace std;

int main() {
    int H, W, N;
    cin >> H >> W >> N;

    vector<vector<string>> grid(H, vector<string>(W, "."));
    pair<int, int> point = {0, 0};
    int direction = 0;
    vector<int> dh = {-1, 0, 1, 0};
    vector<int> dw = {0, 1, 0, -1};

    for(int i = 0; i < N; i++){
        if(grid[point.first][point.second] == "."){
            grid[point.first][point.second] = "#";
            direction = (direction + 1) % 4;
        }else{
            grid[point.first][point.second] = ".";
            direction = (direction + 3) % 4;
        }
        point.first = (point.first + dh[direction] + H) % H;
        point.second = (point.second + dw[direction] + W) % W;
    }

    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}
