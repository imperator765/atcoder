#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> A(N), S(N-1), T(N-1);

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    for(int i = 0; i < N-1; i++){
        cin >> S[i] >> T[i];
    }

    for(int i = 0; i < N-1; i++) {
        if(A[i] >= S[i]) {
            long long trades = A[i] / S[i];
            A[i] -= trades * S[i];
            A[i+1] += trades * T[i];
        }
    }

    cout << A[N-1] << endl;
    return 0;
}
