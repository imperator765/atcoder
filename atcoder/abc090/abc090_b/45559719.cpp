#include <iostream>
using namespace std;

int main(){
  int a;
  int b;
  int x = 0;
  
  cin >> a;
  cin >> b;

  for (int i = a; i <= b; i++){
    int s = i % 10;
    int t = (i/10)%10;
    int u = (i/1000)%10;
    int v = (i/10000)%10;

    if(s == v && t == u){
        x++;
    }
  }
  cout << x << endl;
}