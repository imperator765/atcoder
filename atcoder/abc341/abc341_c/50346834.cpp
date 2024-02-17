#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W, N;
    cin >> H >> W >> N;

    string T;
    cin >> T;

    vector<string> grid(H);
    for (int i = 0; i < H; ++i) {
        cin >> grid[i];
    }

    map<char, pair<int, int>> dir = {{'L', {0, -1}}, {'R', {0, 1}}, {'U', {-1, 0}}, {'D', {1, 0}}};

    int positions = 0;
    for (int i = 1; i < H - 1; ++i) {
        for (int j = 1; j < W - 1; ++j) {
            if (grid[i][j] == '.') {
                int x = i, y = j;
                bool possible = true;
                for (char move : T) {
                    x += dir[move].first;
                    y += dir[move].second;

                    if (x < 0 || x >= H || y < 0 || y >= W || grid[x][y] == '#') {
                        possible = false;
                        break;
                    }
                }
                if (possible) ++positions;
            }
        }
    }

    cout << positions << endl;
    return 0;
}
