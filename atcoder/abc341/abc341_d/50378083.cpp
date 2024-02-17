#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}

int main() {
    long long N, M, K;
    cin >> N >> M >> K;
    long long left = 1, right = 2 * (long long)1e18;
    while (left < right) {
        long long mid = left + (right - left) / 2;
        if (mid / N + mid / M - 2 * (mid / lcm(N, M)) < K) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    cout << left << endl;
    return 0;
}
