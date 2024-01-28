#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> X(M);
    for (int i = 0; i < M; ++i) cin >> X[i];
    vector<long long> v(N + 1);
    for (int j = 0; j < M - 1; ++j) {
        if (X[j] > X[j + 1]) {
            v[X[j + 1]] += N - (X[j] - X[j + 1]);
            v[X[j]] += -(N - (X[j] - X[j + 1]));
            v[0] += X[j] - X[j + 1];
            v[X[j + 1]] += -(X[j] - X[j + 1]);
            v[X[j]] += X[j] - X[j + 1];
            v[N] += -(X[j] - X[j + 1]);
        }else{
            v[X[j]] += N - (X[j + 1] - X[j]);
            v[X[j + 1]] += -(N - (X[j + 1] - X[j]));
            v[0] += X[j + 1] - X[j];
            v[X[j]] += -(X[j + 1] - X[j]);
            v[X[j + 1]] += X[j + 1] - X[j];
            v[N] += -(X[j + 1] - X[j]);
        }
    }
    long long distance = LLONG_MAX;
    for(int i = 0; i < N ; i++){
        v[i + 1] += v[i];
        distance = min(v[i], distance);
    }
    
    cout << distance << endl;
    return 0;
}
