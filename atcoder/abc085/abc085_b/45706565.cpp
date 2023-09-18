#include <iostream> 
#include <algorithm>
#include <vector>
using namespace std; 

int main() {
  int N;
  cin >> N;
  vector<int> d(100);
  for(int i = 0; i < N; i++){
    cin >> d[i];
  }

  vector<int> a(100);
  for(int i = 0; i < N; i++){
    a[d[i]]++;
  }
  int ans = 0;
  for(int i = 0; i <= 100; i++){
    if(a[i] > 0){
      ans++;
    }
  }
  cout << ans << endl;
}
