#include<bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    if (!isupper(S[0])) {
        cout << "No" << endl;
        return 0;
    }

    for (size_t i = 1; i < S.length(); ++i) {
        if (!islower(S[i])) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}