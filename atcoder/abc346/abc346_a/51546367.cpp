#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N - 1; i++) {
        cout << A[i] * A[i+1];
        if (i < N - 2) {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}
