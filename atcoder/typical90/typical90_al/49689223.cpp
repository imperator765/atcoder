#include <bits/stdc++.h>
using namespace std;

// 10^18
const long long INF = 1e18;

int main() {
    long long a, b;
    cin >> a >> b;
    long long g = gcd(a, b);  // C++17 の gcd を利用
    if (a / g > INF / b) cout << "Large" << endl;
    else cout << (a / g) * b << endl;
}