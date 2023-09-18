#include <iostream> 
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std; 

int main() {
  int N;
  int K;
  cin >> N;
  cin >> K;
  vector<int> A(N);
  for(int i = 0; i < N; i++){
    cin >> A[i];
  }
  vector<int> B(N);
  for(int i = 0; i < N; i++){
    B[A[i] - 1]++;
  }
  int sum = accumulate(B.begin(), B.end(), 0);
  sort(B.begin(), B.end());
  int num = 0;

  for(int i = N - 1; i > N - K - 1 ; i--){
    num += B[i];
  } 
    cout << sum - num << endl;
}