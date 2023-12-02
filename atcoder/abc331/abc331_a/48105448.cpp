#include<bits/stdc++.h>
using namespace std;

int main() {
    int M;
    int D;
    int y;
    int m;
    int d;
    cin >> M >> D >> y >> m >> d;

    if(d < D){
        d += 1;
    }else if(m < M){
        m += 1;
        d = 1;
    }else{
        y += 1;
        m = 1;
        d = 1;
    }

    cout << y << " " << m << " " <<  d << endl;

    return 0;
}