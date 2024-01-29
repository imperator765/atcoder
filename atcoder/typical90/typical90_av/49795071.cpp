#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<long long> scores;
    for (int i = 0; i < N; ++i) {
        long long A, B;
        cin >> A >> B;
        scores.push_back(B);
        scores.push_back(A - B);
    }

    sort(scores.rbegin(), scores.rend());

    long long total_score = 0;
    for (int i = 0; i < K; ++i) {
        total_score += scores[i];
    }

    cout << total_score << endl;
    return 0;
}
