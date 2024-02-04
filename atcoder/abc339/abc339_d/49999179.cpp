#include<bits/stdc++.h>
using namespace std;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

int main() {
  int N;
  vector<string> S;
  int px1 = -1, py1 = -1, px2 = -1, py2 = -1;
  cin >> N;
  S.resize(N);
  for (int i = 0; i < N; i++) {
    cin >> S[i];
    for (int j = 0; j < N; j++) {
      if (S[i][j] == 'P') {
        if (px1 == -1 && py1 == -1) {
          px1 = i, py1 = j;
        } else {
          px2 = i, py2 = j;
        }
      }
    }
  }

  queue<vector<int>> Q;
  vector visited(N, vector(N, vector(N, vector(N, false))));
  Q.push({px1, py1, px2, py2, 0});
  visited[px1][py1][px2][py2] = true;

  int moves = -1;
  while (!Q.empty()) {
    vector<int> state = Q.front();
    Q.pop();
    int x1 = state[0], y1 = state[1], x2 = state[2], y2 = state[3];
    if (x1 == x2 && y1 == y2){
      moves = state[4];
      break;
    }
    for (int i = 0; i < 4; i++) {
      int nx1 = x1 + dx[i], ny1 = y1 + dy[i], nx2 = x2 + dx[i], ny2 = y2 + dy[i];
      if (!(nx1 >= 0 && nx1 < N && ny1 >= 0 && ny1 < N && S[nx1][ny1] != '#')) nx1 = x1, ny1 = y1;
      if (!(nx2 >= 0 && nx2 < N && ny2 >= 0 && ny2 < N && S[nx2][ny2] != '#')) nx2 = x2, ny2 = y2;
      if (visited[nx1][ny1][nx2][ny2] == false) {
        Q.push({nx1, ny1, nx2, ny2, state[4] + 1});
        visited[nx1][ny1][nx2][ny2] = true;
      }
    }
  }
  cout << moves << endl;
  return 0;
}
