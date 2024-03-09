#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, M, L, Q;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    cin >> M;
    vector<int> B(M);
    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }
    cin >> L;
    vector<int> C(L);
    for (int i = 0; i < L; i++) {
        cin >> C[i];
    }
    cin >> Q;
    unordered_set<int> AB_sum;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            AB_sum.insert(A[i] + B[j]);
        }
    }
    for (int i = 0; i < Q; i++) {
        int X;
        cin >> X;
        bool found = false;
        for (int j = 0; j < L; j++) {
            int diff = X - C[j];
            if (AB_sum.find(diff) != AB_sum.end()) {
                found = true;
                break;
            }
        }
        if (found)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
