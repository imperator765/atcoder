#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> grid(N, vector<int>(N, 0));
    
    int dh[] = {0, 1, 0, -1};
    int dw[] = {1, 0, -1, 0};
    int direction = 0;
    int count = 1;
    int h = 0, w = 0;

    while(count <= N * N - 1){
        grid[h][w] = count++;
        int nh = h + dh[direction];
        int nw = w + dw[direction];

        if(nh < 0 || nw < 0 || nh >= N || nw >= N || grid[nh][nw] != 0){
            direction = (direction + 1) % 4;
            nh = h + dh[direction];
            nw = w + dw[direction];
        }

        h = nh;
        w = nw;
    }


    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(grid[i][j] != 0) {
                cout << grid[i][j] << " ";
            } else {
                cout << "T" << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
