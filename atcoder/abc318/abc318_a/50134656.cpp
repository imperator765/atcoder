#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, M, P;
    cin >> N >> M >> P;

    int days = 0;
    if(N >= M){
        N -= M;
        days++;
    }

    while(N >= 0){
        N -= P;
        days++;
    }

    cout << days - 1;
    return 0;
}