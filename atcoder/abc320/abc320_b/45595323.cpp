#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(string s) {
    int n = s.size();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i]) return false;
    }
    return true;
}


int longest_palindrome(string s) {
    int n = s.size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            string t = s.substr(i, j - i + 1);
            if (is_palindrome(t)) {
                ans = max(ans, (int)t.size());
            }
        }
    }
    return ans;
}

int main() {
    string S;
    cin >> S;
    cout << longest_palindrome(S) << endl;
}