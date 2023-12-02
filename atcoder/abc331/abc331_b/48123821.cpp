#include<bits/stdc++.h>
using namespace std;

int main() {
  int N, S, M, L;
  cin >> N >> S >> M >> L;
  
  int max6 = (N + 5) / 6; 
  int max8 = (N + 7) / 8;
  int max12 = (N + 11) / 12;
  
  int ans = 1e9;
  
  for (int i = 0; i <= max6; i++) {
    for (int j = 0; j <= max8; j++) {
      for (int k = 0; k <= max12; k++) {
        if (i * 6 + j * 8 + k * 12 >= N) {
          int cost = i * S + j * M + k * L;
          ans = min(ans, cost);
        }
      }
    }
  }
  
  cout << ans << endl;
  return 0;
}
