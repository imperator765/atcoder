#include <iostream> 
#include <algorithm>
#include <string>
#include <vector>
#include <numeric>
#include <cstdlib>
using namespace std; 

int main() {
  int N;
  int X;
  cin >> N;
  cin >> X;
  vector<int> A(N-1);

  for(int i = 0; i < N - 1; i++){
    cin >> A[i];
  }

  sort(A.begin(), A.end());

  if(A[N - 2] < X - accumulate(A.begin(), A.end(), 0) + A[0] + A[N - 2]){
    cout << -1 << endl;
  }else{
    if(accumulate(A.begin(), A.end(), 0) - A[N - 2] >= X){
      cout << 0 << endl;
    }else{
      cout << X - accumulate(A.begin(), A.end(), 0) + A[0] + A[N - 2]<< endl;
    }
  }
}