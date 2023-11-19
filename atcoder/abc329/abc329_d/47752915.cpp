#include<bits/stdc++.h>
using namespace std;

int main() {
  int N;
  int M;
  cin >> N >> M;

  vector<int> A(M);
  for(int i = 0; i < M; i++){
    cin >> A[i];
  }

  vector<int> B(N + 1);
  int ans = 0;

  for(int i = 0; i < M; i++){
    B[A[i]]++;
    if((B[A[i]] > B[ans])||((B[A[i]] == B[ans])&&(A[i] < ans))){
        ans = A[i];
    }
    cout << ans << endl;
  }



  return 0;
}