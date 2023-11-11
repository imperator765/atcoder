#include<bits/stdc++.h>
using namespace std;

bool is_zorome(int x, int y) {
  int d = x % 10;
  while (x > 0) {
    if (x % 10 != d) return false;
    x /= 10;
  }

    while (y > 0) {
    if (y % 10 != d) return false;
    y /= 10;
  } 

  return true;
}

int main() {
  int N;
  cin >> N;

  int D[N];
  for (int i = 0; i < N; i++) {
    cin >> D[i];
  }

  int ans = 0;

  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= D[i-1]; j++) {
      if (is_zorome(i, j)) {
        ans++;
      }
    }
  }

  cout << ans << endl;
  return 0;
}