#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N;
    vector<int> P(N);
    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }

    vector<int> position(N+1);
    for (int i = 0; i < N; i++) {
        position[P[i]] = i;
    }

    cin >> Q;
    for (int i = 0; i < Q; i++) {
        int A, B;
        cin >> A >> B;

        if (position[A] < position[B]) {
            cout << A << endl;
        } else {
            cout << B << endl;
        }
    }
    return 0;
}
