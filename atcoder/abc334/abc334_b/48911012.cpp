#include<bits/stdc++.h>
using namespace std;

int main() {
    long long A, M, L, R;
    cin >> A >> M >> L >> R;
    L-=A;
    R-=A;

    if(L>0){
        L=L+M-1;
    }
    if(R<0){
        R=R-M+1;
    }

    cout << R/M - L/M + 1 << endl;
}