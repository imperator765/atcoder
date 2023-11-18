#include<bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin  >> S;

  for(int i = 0; i < S.size()- 1; i++){
    cout << S.at(i) << " ";
  }

  cout << S.at(S.size() -1);

  return 0;
}