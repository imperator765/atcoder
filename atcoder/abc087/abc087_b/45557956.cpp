#include <iostream>
using namespace std;

int main(){
  int a;
  int b;
  int c;
  int x;
  int n = 0;
  
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> x;
  
  for (int i = 0; i <= a; ++i){
      for (int j = 0; j <= b; ++j){
          for (int k = 0; k <= c; ++k){
            if ((500 * i + 100 * j + 50 * k) == x){
                ++n;
            }
        }
    }
  }
 cout << n << endl; 
}

