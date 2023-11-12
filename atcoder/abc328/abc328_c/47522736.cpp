#include<bits/stdc++.h>
using namespace std;

int main() {
  int N;
  int Q;
  string S;
  cin >> N >> Q >> S;

  vector<int> l(Q);
  vector<int> r(Q);

  for(int i = 0; i < Q; i++){
    cin >> l[i] >> r[i];
  }

  vector<int> same(N, 0);
  int count = 0;
  for(int i = 0; i < N - 1; i++){
    if(S.at(i) == S.at(i + 1)){
      count ++;
    }
    same[i + 1] = count;
  }

  for(int i = 0; i < Q; i++){
     cout << same[r[i] - 1] - same[l[i] - 1]  << endl;
  }

  return 0;
}