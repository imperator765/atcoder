#include<bits/stdc++.h>
using namespace std;

int main() {
  int H = 0;
  int W = 0;;
  cin >> H >> W;
  
  vector<vector<int>> A(H, vector<int>(W));
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      cin >> A[i][j];
    }
  }
  
  vector<int> tate(W);
  vector<int> yoko(H);
  
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      yoko[i] += A[i][j];
    }
  }
  
  for(int i = 0; i < W; i++){
    for(int j = 0; j < H; j++){
      tate[i] += A[j][i];
    }  
  }
  
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W - 1; j++){
      cout << yoko[i] + tate[j] - A[i][j] << " ";
    }
    cout << yoko[i] + tate[W - 1] - A[i][W - 1] << endl;
  }
  
  return 0;
}