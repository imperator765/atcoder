#include<bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    size_t pos = S.find_last_of('.');
    string result = S.substr(pos + 1);

    cout << result << endl;
    return 0;
}
