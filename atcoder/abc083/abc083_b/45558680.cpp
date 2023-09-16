#include <iostream>
using namespace std;

int main(){
  int a;
  int b;
  int x = 0;
  int n;
  
  cin >> n;
  cin >> a;
  cin >> b;
  
  for(int i = 1; i <= n; i++){
    int s = i % 10;
    int t = (i / 10) % 10;
    int u = (i / 100) % 10;
    int v= (i / 1000) % 10;
    int w = (i / 10000) % 10;
    if(a <= (s + t + u + v + w) && (s + t + u + v + w) <= b){
        x += i;
    }
  }


 cout << x << endl; 
}

