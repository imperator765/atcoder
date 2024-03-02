#include<bits/stdc++.h>
using namespace std;

bool palindrome(long long x) {
    string s = to_string(x);
    string revS = s;
    reverse(revS.begin(), revS.end());
    return s == revS;
}

int main() {
    long long N;
    cin >> N;

    long long maxP = -1;
    for (long long i = 1; i*i*i <= N; ++i) {
        long long cube = i * i * i;
        if (palindrome(cube)) {
            maxP = max(maxP, cube);
        }
    }

    cout << maxP << endl;

    return 0;
}
