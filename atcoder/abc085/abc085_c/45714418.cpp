#include <iostream> 
#include <algorithm>
#include <numeric>
using namespace std; 

int main() {
  int N;
  int Y;
  cin >> N;
  cin >> Y;
  
  int x = -1;
  int y = -1;
  int z = -1;

  for(int i = 0; i <= N; i++){
    for(int j = 0; j <= N - i; j++){
            if(1000 * i + 5000 * j + 10000 * (N - i - j) == Y){
                x = (N - i - j);
                y = j;
                z = i;
                break;
            }
        }
    }
  cout << x << " " << y << " " << z << endl;
}