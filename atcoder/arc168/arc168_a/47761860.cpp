#include<bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin  >> N >>S;
  
  long count = 0;
  long ans = 0;
  for(int i = 0; i < N -1; i++){
    if(S.at(i) == '>'){
      count ++;
      if(((!(i == N - 2))&&(!(S.at(i + 1) == '>')))||(i == N - 2)){
          ans += (count * (count + 1)) * 0.5;
          count = 0;
        }    
    }
  }

  cout << ans << endl;


  return 0;
}