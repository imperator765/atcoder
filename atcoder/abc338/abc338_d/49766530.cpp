#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> X(M);
    for (int i = 0; i < M; i++) cin >> X[i];
    vector<long long> v(N + 1);
    for (int j = 0; j < M - 1; j++) {
        int small = min(X[j] - 1, X[j + 1] - 1);
        int large = max(X[j] - 1, X[j + 1] - 1);
        v[small] += N - (large - small);
        v[large] += -(N - (large - small));
        v[0] += large - small;
        v[small] += -(large - small);
        v[large] += large - small;
    }
    long long distance = LLONG_MAX;
    for(int i = 0; i < N ; i++){
        v[i + 1] += v[i];
        distance = min(v[i], distance);
    }
    
    cout << distance << endl;
    return 0;
}
