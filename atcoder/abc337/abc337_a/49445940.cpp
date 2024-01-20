#include<bits/stdc++.h>
using namespace std;

int main() {
    int N = 0;
    int X = 0;
    int Y = 0;
    cin >> N;
    for(int i = 0; i < N; i++){
        int x, y;
        cin >> x >> y;
        X += x;
        Y += y;
    }
    if(X > Y){
        cout << "Takahashi" << endl;
    }else if(Y > X){
       cout << "Aoki" << endl; 
    }else if(X == Y){
        cout << "Draw" << endl;
    }
    return 0;
}