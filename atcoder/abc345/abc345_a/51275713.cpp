#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    if (S.front() == '<' && S.back() == '>' && S.find_first_not_of('=', 1) == S.size() - 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
