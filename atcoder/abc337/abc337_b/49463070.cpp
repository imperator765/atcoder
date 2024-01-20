#include<bits/stdc++.h>
using namespace std;

bool isExtendedABC(const string& S) {
    int state = 0;
    for (char c : S) {
        switch (state) {
            case 0:
                if (c == 'A') state = 1;
                else if (c == 'B') state = 2;
                else if (c == 'C') state = 3;
                else return false;
                break;
            case 1:
                if (c == 'B') state = 2;
                else if (c == 'C') state = 3;
                else if (c != 'A') return false;
                break;
            case 2:
                if (c == 'C') state = 3;
                else if (c != 'B') return false;
                break;
            case 3:
                if (c != 'C') return false;
                break;
        }
    }
    return true;
}

int main() {
    string S;
    cin >> S;

    cout << (isExtendedABC(S) ? "Yes" : "No") << endl;

    return 0;
}
