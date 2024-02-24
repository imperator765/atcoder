#include<bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    if (S[0] != S[1]) {
        if (S[0] == S[2]) {
            cout << 2 << endl;
        } else {
            cout << 1 << endl;
        }
    } else {
        for (int i = 2; i < S.length(); ++i) {
            if (S[i] != S[0]) {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}