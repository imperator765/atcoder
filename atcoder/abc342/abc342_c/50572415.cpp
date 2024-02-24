#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    string S;
    cin >> N >> S >> Q;

    vector<char> mapping(26);
    iota(mapping.begin(), mapping.end(), 'a');

    for (int i = 0; i < Q; i++) {
        char ci, di;
        cin >> ci >> di;
        for (char& c : mapping) {
            if (c == ci) {
                c = di;
            }
        }
    }

    for (char& c : S) {
        c = mapping[c - 'a'];
    }

    cout << S << endl;

    return 0;
}
