#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

bool checkSequence(int W, int B) {
    string S = "wbwbwwbwbwbw";
    int patternLength = 12;
    int totalKeys = W + B;

    for (int start = 0; start < patternLength; ++start) {
        int wCount = 0, bCount = 0;
        for (int i = start; i < start + totalKeys; ++i) {
            char key = S[i % patternLength];
            if (key == 'w') ++wCount;
            else ++bCount;
        }
        if (wCount == W && bCount == B) return true;
    }
    return false;
}


int main() {
    int W, B;
    cin >> W >> B;

    int patternW = 5, patternB = 7;

    if (checkSequence(W, B)) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}