#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    int Q;
    cin >> Q;

    vector<int> B(Q);
    for(int i = 0; i < Q; i++){
        cin >> B[i];
    }


    sort(A.begin(), A.end());
    for(int i = 0; i < Q; i++){
        int candidateUpper = INT_MAX;
        if(!(lower_bound(A.begin(), A.end(), B[i]) == A.begin())){
            candidateUpper = abs(*(lower_bound(A.begin(), A.end(), B[i]) - 1) - B[i]);
        }
        int candidateUnder = abs(*lower_bound(A.begin(), A.end(), B[i]) - B[i]);
        cout << min(candidateUpper, candidateUnder) << endl;
    }
    return 0;
}