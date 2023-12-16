#include<bits/stdc++.h>
using namespace std;

int main() {
    string S;
    string T;
    cin >> S >> T;

    bool isSLineEdge = abs(S.at(0) - S.at(1)) == 1 || abs(S.at(0) - S.at(1)) == 4;
    bool isTLineEdge = abs(T.at(0) - T.at(1)) == 1 || abs(T.at(0) - T.at(1)) == 4;
    if ((isSLineEdge && isTLineEdge) || (!isSLineEdge && !isTLineEdge)) {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
