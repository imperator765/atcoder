#include<bits/stdc++.h>
using namespace std;

long long euclidean(long long x, long long y){
  if(x % y == 0){
    return y;
  }else{
    return euclidean (y, x % y);
  }
}

int main() {
  long long A;
  long long B;
  long long C;
  cin >> A >> B >> C;
  long long gcd = euclidean(euclidean(A, B), C);
  
  cout << A/gcd + B/gcd + C/gcd - 3<< endl; 
  
  return 0;
}