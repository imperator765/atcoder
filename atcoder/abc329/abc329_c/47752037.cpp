#include<bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;

  int ans = 0;

  for (char c = 'a'; c <= 'z'; c++) {
    int cnt = 0;
    int save = 0;
    for (int i = 0; i < N; i++) {
      if (S[i] == c) {
        cnt++;
        if(((!(i == N - 1))&&(!(S[i+1] == c)))||(i == N - 1)){
          if(save <= cnt){
            save = cnt;
          }
          cnt = 0;
        }     
    }
   }
  ans += save;
  }
  cout << ans << endl;
  return 0;
}