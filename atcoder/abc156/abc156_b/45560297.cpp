#include <iostream>
using namespace std;

int main(){
  int n;
  int k;
  int x = 0;
  
  cin >> n;
  cin >> k;

  for (int i = 0; n > 0; i++){
    n = n / k;
    x++;
  }
  cout << x << endl;
}
