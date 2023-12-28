#include<bits/stdc++.h>
using namespace std;

long long floor(long long x, long long m){
    long long r=(x%m+m)%m;
    return(x-r)/m;
}

int main() {
    long long A, M, L, R;
    cin >> A >> M >> L >> R;

    L-=A;
    R-=A;
    
    cout << floor(R, M)-floor(L-1, M) << endl;
}