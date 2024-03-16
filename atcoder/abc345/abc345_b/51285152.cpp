#include <bits/stdc++.h>
using namespace std;

int main() {
    long long X;
    cin >> X;

    long long result = X / 10;
    if (X % 10 > 0 && X > 0) {
        result += 1;
    }

    cout << result << endl;
    return 0;
}
