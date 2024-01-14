#include <iostream>
#include <vector>
using namespace std;

long convert(long x) {
  x = x - 1;
  long res = 0;
  long p = 1;
  while (x > 0) {
    long d = x % 5;
    d *= 2;
    res += d * p;
    p *= 10;
    x /= 5;
  }
  return res;
}

int main() {
  long N;
  cin >> N;
  long ans = convert(N);
  cout << ans << endl;
  return 0;
}