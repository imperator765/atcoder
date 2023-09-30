
#include <iostream> 
#include <algorithm>
#include <string>
#include <vector>
#include <numeric>
#include <cstdlib>
using namespace std; 

int main() {
  int N;
  int M;
  string S;
  string T;

  cin >> N;
  cin >> M;
  cin >> S;
  cin >> T;

  int settouji = 0;
  int setsubiji = 0;
  int ans = 0;

  for(int i = 0; i < N; i++){
    if(!(S.at(i) == T.at(i))){
      settouji = -1;
      break;
    }
  }

  for(int i = 0; i < N; i++){
    if(!(S.at(i) == T.at(M - N + i))){
      setsubiji = -1;
      break;
    }
  }

  if((settouji == 0) && (setsubiji == 0)){
    ans = 0;
  }
  if((settouji == 0) && (setsubiji == -1)){
    ans = 1;
  }
  if((settouji == -1) && (setsubiji == 0)){
    ans = 2;
  }
  if((settouji == -1) && (setsubiji == -1)){
    ans = 3;
  }
  cout << ans;
}
