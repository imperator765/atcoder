#include<bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<int> C(N + 1);
  vector<int> P(N + 1);
  for(int i = 1; i <= N; i++){
    cin >> C[i] >> P[i];
  }
  
  vector<int> P1sum(N+1);
  vector<int> P2sum(N+1);
  
  for(int i = 1; i <= N; i++){
    if(C[i] == 1){
      P1sum[i] += P[i] + P1sum[i - 1];
      P2sum[i] = P2sum[i - 1];
    }else{
      P2sum[i] += P[i] + P2sum[i - 1];
      P1sum[i] = P1sum[i - 1];
    }
  }
  
  int Q;
  cin >> Q;
  
  vector<int> L(Q+1);
  vector<int> R(Q+1);
  for(int i = 1; i <= Q; i++){
    cin >> L[i] >> R[i];
  }
  
  for(int i = 1; i <= Q; i++){
    cout << P1sum[R[i]] - P1sum[L[i] - 1] << " ";
    cout << P2sum[R[i]] - P2sum[L[i] - 1] << endl;
  }

  return 0;
}