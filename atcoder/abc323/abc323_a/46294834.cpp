#include <iostream> 
#include <algorithm>
#include <string>
#include <vector>
#include <numeric>
#include <cstdlib>
using namespace std; 

int main() {
  string S;
  cin >> S;

  int answerno = 0;

  for(int i = 1; i <= 8; i++){
    if(S.at(2 * i - 1)=='1'){
      answerno = 1;
    }
  }
  
  string answer;
  if(answerno==0){
    answer = "Yes";
  }else{
    answer = "No";
  }

  cout << answer << endl;
}
