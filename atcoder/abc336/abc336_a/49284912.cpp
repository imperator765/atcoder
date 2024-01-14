#include<bits/stdc++.h>
using namespace std;

string dragon(int N) {
  string ans = "L";
  for (int i = 0; i < N; i++) {
    ans += "o";
  }
  ans += "ng";
  return ans;
}

int main() {
  int N;
  cin >> N;
  cout << dragon(N) << endl;
  return 0;
}