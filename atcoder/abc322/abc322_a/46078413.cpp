#include <iostream> 
#include <algorithm>
#include <string>
#include <vector>
#include <numeric>
#include <cstdlib>
using namespace std; 

int main() {
  int n;
  string s;

  cin >> n;
  cin >> s;

  int N = 0;
  int ans = 0;

  for(int i = 0; i < n - 2; i++){
    if((s.at(i)=='A')&&(s.at(i+1)=='B')&&(s.at(i+2)=='C')){
      N = i + 1;
      break;
    }
  }
  if(N == 0){
    ans = -1;
  }else{
    ans = N;
  }
  cout << ans;
}
