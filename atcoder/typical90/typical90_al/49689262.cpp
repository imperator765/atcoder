#include<bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

int main() {
    long long A, B;
    cin >> A >> B;
    if(A / gcd(A, B) > INF / B){
        cout << "Large" << endl;
    }else{
        cout << (A / gcd(A, B)) * B << endl;
    }
    return 0;
}