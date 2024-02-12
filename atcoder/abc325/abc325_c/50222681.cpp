#include<bits/stdc++.h>
using namespace std;

int dx[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dy[] = {-1, -1, -1, 0, 0, 1, 1, 1};

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    for(int i = 0; i < H; i++){
        cin >> S[i];
    }

    int count = 0;
    vector<vector<bool>> checked(H, vector<bool>(W, false));
    queue<pair<int, int>> que;

    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            if(S[i].at(j) == '#' && checked[i][j] == 0){
                count++;
                que.push({i, j});
                checked[i][j] = true;
                while(!que.empty()){
                    int x = que.front().first;
                    int y = que.front().second;
                    que.pop();
                    for (int i = 0; i < 8; i++) {
                        int nx = x + dx[i];
                        int ny = y + dy[i];
                        if (nx >= 0 && nx < H && ny >= 0 && ny < W && !checked[nx][ny] && S[nx].at(ny) == '#') {
                            que.push({nx, ny});
                            checked[nx][ny] = true;
                        }
                    }
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}
