#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int n;
  int a[100];
  int Alice = 0;
  int Bob = 0;
  
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  
  sort(a, a + n, greater<int>());
  for (int i = 0; i < n; i++){
    if(i % 2==0){
        Alice += a[i];
    }else{
        Bob += a[i];
    }
  }
  cout << Alice- Bob << endl;
}
