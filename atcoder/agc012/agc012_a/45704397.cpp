#include <iostream> 
#include <algorithm>
#include <vector>
using namespace std; 

int main() {
  int N;
  cin >> N;
  vector<int> a(3 * N);
  for(int i = 0; i < 3 * N; i++){
    cin >> a[i];
  }
  sort(a.begin(), a.end());

  long ans = 0;
  for(int i = 0; i < N; i++){
    ans += a[N + 2 * i];
  }

  cout << ans << endl;
}
