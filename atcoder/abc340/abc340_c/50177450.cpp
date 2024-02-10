#include<bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;

    int count = 0;
    long long tmpN = N;

    while(tmpN > 0){
        tmpN /= 2;
        count++;
    }

    long long pow = 1;

    for(int i = 0; i < count; i++){
        pow *= 2;
    }

    if(pow == N){
        cout << N * count << endl;
    }else{
        cout << N * (count - 1) +  2 * (N - pow / 2) << endl;
    }

    return 0;
}