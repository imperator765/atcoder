#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<long long> R(N);
    vector<long long> X(Q);

    for(int i=0; i<N; i++){
        cin >> R[i];
    }
    for(int i=0; i<Q; i++){
        cin >> X[i];
    }

    sort(R.begin(), R.end());

    for(int i=1; i<N; i++){
        R[i]+=R[i-1];
    }

    for(int i=0; i<Q; i++){
        cout << upper_bound(R.begin(), R.end(), X[i])-R.begin() << endl;   
    }
    return 0;
}