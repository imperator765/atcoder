#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> A(N), B(N), C(N);

    for(int i = 0; i < N; i++) cin >> A[i];
    for(int i = 0; i < N; i++) cin >> B[i];
    for(int i = 0; i < N; i++) cin >> C[i];

    vector<long long> countA(46, 0), countB(46, 0), countC(46, 0);
    for(int i = 0; i < N; i++) {
        countA[A[i] % 46]++;
        countB[B[i] % 46]++;
        countC[C[i] % 46]++;
    }

    long long ans = 0;
    for(int i = 0; i < 46; i++) {
        for(int j = 0; j < 46; j++) {
            for(int k = 0; k < 46; k++) {
                if((i + j + k) % 46 == 0) {
                    ans += countA[i] * countB[j] * countC[k];
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}
