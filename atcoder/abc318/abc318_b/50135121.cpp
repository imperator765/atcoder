#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> sheet(N, vector<int>(4));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < 4; j++){
            cin >> sheet[i][j];
        }
    }

    vector<vector<int>> grid(101, vector<int>(101));
    int S = 0;
    for(int i = 0; i < N; i++){
        for(int x = sheet[i][0]; x <= sheet[i][1] - 1; x++){
            for(int y = sheet[i][2]; y <= sheet[i][3] - 1; y++){
                if(grid[x][y] == 0){
                    grid[x][y]++;
                    S++;
                }
            }
        }
    }

    cout << S << endl;
}