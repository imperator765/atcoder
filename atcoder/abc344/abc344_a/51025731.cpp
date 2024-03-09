#include<bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    int first = S.find('|');
    int second = S.find('|', first + 1);

    S.erase(first, second - first + 1);

    cout << S;
    return 0;
}
