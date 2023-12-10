#include<bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  string S;
  cin >> N >> M >> S;
  int m = M;
  int r = 0;
  int r_max=0;
  for (int i = 0; i < N; i++) {
    if (S[i] == '0') {
      m = M;
      r_max = max(r, r_max);
      r = 0; 
    } else if (S[i] == '1') {
      if (m > 0) {
        m--;
      } else {
        r++;
      }
    } else {
      r++;
    }
  }
  r_max = max(r, r_max);
  cout << r_max << endl;
  return 0;
}
