#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> Q(N), A(N), B(N);
    for (int i = 0; i < N; i++) cin >> Q[i];
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < N; i++) cin >> B[i];

    int S = 0;
    for (int a = 0; a <= 1000000; a++) {
        bool canMakeA = true;
        int b = 1000000;
        for (int i = 0; i < N; i++) {
            if (A[i] > 0) {
                if (Q[i] < A[i] * a) {
                    canMakeA = false;
                    break;
                }
            }
            if (B[i] > 0) {
                b = min(b, (Q[i] - A[i] * a) / B[i]);
            }
        }
        if (!canMakeA) break;
        S = max(S, a + b);
    }

    cout << S << endl;

    return 0;
}