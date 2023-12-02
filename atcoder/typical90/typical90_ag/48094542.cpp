#include<bits/stdc++.h>
using namespace std;

int main() {
    int H;
    int W;
    cin >> H >> W;

    if(H == 1){
        cout << W << endl;
    }else if(W == 1){
        cout << H << endl;
    }else{
        cout << (H / 2 + H % 2) * (W / 2 + W % 2) << endl;
    }
    
    return 0;
}