#include <iostream>
#include <string>

using namespace std;

int main() {
    int N, A, B, C, D;
    cin >> N >> A >> B >> C >> D;

    bool flag = false;

    if(abs(B - C) == 1) flag = true;
    if(B != 0 && B == C) flag = true;
    if(B == 0 && B == C && (A == 0 || D == 0)) flag = true;

    if (flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
