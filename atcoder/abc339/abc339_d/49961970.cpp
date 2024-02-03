#include<bits/stdc++.h>
using namespace std;

int N;
vector<string> S;
int px1, py1, px2, py2;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

bool is_valid(int x, int y) {
  return x >= 0 && x < N && y >= 0 && y < N && S[x][y] != '#';
}


int solve() {
  queue<vector<int>> Q;
  vector<vector<vector<vector<bool>>>> visited(N, vector<vector<vector<bool>>>(N, vector<vector<bool>>(N, vector<bool>(N, false))));
  Q.push({px1, py1, px2, py2, 0});
  visited[px1][py1][px2][py2] = true;
  while (!Q.empty()) {
    vector<int> state = Q.front();
    Q.pop();
    int x1 = state[0], y1 = state[1], x2 = state[2], y2 = state[3], cnt = state[4];
    if (x1 == x2 && y1 == y2) return cnt;
    for (int i = 0; i < 4; i++) {
      int nx1 = x1 + dx[i], ny1 = y1 + dy[i], nx2 = x2 + dx[i], ny2 = y2 + dy[i];
      if (!is_valid(nx1, ny1)) nx1 = x1, ny1 = y1;
      if (!is_valid(nx2, ny2)) nx2 = x2, ny2 = y2;
      if (!visited[nx1][ny1][nx2][ny2]) {
        Q.push({nx1, ny1, nx2, ny2, cnt + 1});
        visited[nx1][ny1][nx2][ny2] = true;
      }
    }
  }
  return -1;
}

int main() {
  cin >> N;
  S.resize(N);
  for (int i = 0; i < N; i++) {
    cin >> S[i];
    for (int j = 0; j < N; j++) {
      if (S[i][j] == 'P') {
        if (px1 == 0 && py1 == 0) {
          px1 = i, py1 = j;
        } else {
          px2 = i, py2 = j;
        }
      }
    }
  }
  cout << solve() << endl;
  return 0;
}
