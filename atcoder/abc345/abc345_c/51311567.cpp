#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    long long N = S.length();

    vector<int> freq(26, 0);
    for (char c : S) {
        freq[c - 'a']++;
    }

    long long combinations = N * (N - 1) / 2;
    bool flag = false;
    for (int f : freq) {
        if (f > 1) {
            flag = true;
            combinations -= (long long)f * (f - 1) / 2;
        }
    }

    if(flag){
        combinations++;
    }

    cout << combinations << endl;

    return 0;
}
