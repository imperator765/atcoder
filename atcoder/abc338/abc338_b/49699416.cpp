#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    vector<int> freq(26, 0);

    for (char c : S) {
        freq[c - 'a']++;
    }

    char mostFrequent = 'a';
    int maxFreq = 0;

    for (int i = 0; i < 26; ++i) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFrequent = 'a' + i;
        }
    }

    cout << mostFrequent << endl;

    return 0;
}
