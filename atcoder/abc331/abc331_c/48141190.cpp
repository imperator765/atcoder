#include<bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  vector<int> A2(N);
  A2 = A;

  sort(A.begin(),A.end());

  vector<long long> S(N + 1, 0);
  for (int i = 0; i < N; i++) {
    S[i + 1] = S[i] + A[i];
  }

  vector<long long> B(N);
  for (int i = 0; i < N; i++) {
    int idx = upper_bound(A.begin(), A.end(), A2[i]) - A.begin();
    B[i] = S[N] - S[idx];
  }

  for (int i = 0; i < N; i++) {
    cout << B[i] << " ";
  }
  cout << endl;

  return 0;
}
