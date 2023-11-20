#include<bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin  >> N;

  if(N % 2 == 1){
    exit;
  }

  vector<int> kakko(N);
  for(int i = 0; i < N/2; i++){
    kakko[i] = -1;
  }

  for(int i = N/2; i < N; i++){
    kakko[i] = 1;
  }
  
  do{
    int count = 0;
    string ans;
    for(int i = 0; i < N; i++){

      count += kakko[i];
      if(count > 0){
        break;
      }

      if(kakko[i] == -1){
        ans += "(";
      }else{
        ans += ")";
      }

      if(i == N - 1){
        cout << ans << endl;
      }
    }
  }while(next_permutation(kakko.begin(),kakko.end()));
    return 0;
}