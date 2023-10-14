#include <iostream> 
#include <cmath>
#include <limits>
#include <algorithm>
#include <string>
#include <vector>
#include <numeric>
#include <cstdlib>
using namespace std; 

int main() {
  long N;
  cin >> N;

  while(N % 2 == 0){
    N = N/2;
  }

  while(N % 3 == 0){
    N = N/3;
  }
  
  if(N == 1){
    cout << "Yes";
  }else{
    cout << "No";
  }
}
