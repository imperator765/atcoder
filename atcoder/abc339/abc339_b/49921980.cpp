#include<bits/stdc++.h>
using namespace std;

int main() {
    int H, W, N;
    cin >> H >> W >> N;
    vector<vector<char>> grid(H, vector<char>(W, '.'));

    int x = 0, y = 0;
    int direction = 0; // 0:上, 1:右, 2:下, 3:左
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, 1, 0, -1};

    for (int i = 0; i < N; ++i) {
        if (grid[x][y] == '.') {
            grid[x][y] = '#';
            direction = (direction + 1) % 4;
        } else {
            grid[x][y] = '.';
            direction = (direction + 3) % 4;
        }

        x = (x + dx[direction] + H) % H;
        y = (y + dy[direction] + W) % W;
    }

    for (auto &row : grid) {
        for (auto cell : row) {
            cout << cell;
        }
        cout << endl;
    }

    return 0;
}