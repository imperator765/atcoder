#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A, B;
    string S;
    cin >> N >> A >> B >> S;

    vector<char> stack;
    long long invalid_open = 0, invalid_close = 0;

    for (char c : S) {
        if (c == '(') {
            stack.push_back(c);
        } else {
            if (!stack.empty()) {
                stack.pop_back();
            } else {
                invalid_close++;
            }
        }
    }

    invalid_open = stack.size();

    long long cost = 0;
    if (A < 2 * B) {
        long long minValue = min(invalid_open, invalid_close);
        cost += minValue / 2 * A;
        cost += minValue % 2 * A;
        invalid_open -= minValue;
        invalid_close -= minValue;
        cost += ((invalid_open + invalid_close) / 2) * B;
    }else{
        cost += invalid_open / 2 * B;
        cost += invalid_close / 2 * B;
        cost += invalid_open % 2 * B;
        cost += invalid_close % 2 * B;
    }
    

    cout << cost << endl;
    return 0;
}
