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

  cin >> N;
  cin >> M;

  vector<int> A(M + 1);
  vector<int> ans(N);
  
  for(int i = 1; i <= M; i++){
    cin >> A[i];
  }
  A[0] = 0;

  for(int i = 1; i <= M; i++){
    for(int j = A[i] - A[i - 1] -1; j >= 0; j--){
      cout << j << endl;
    }
  }
}