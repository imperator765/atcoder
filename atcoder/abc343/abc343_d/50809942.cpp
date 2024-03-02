#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, T;
    cin >> N >> T;

    vector<long long> scores(N, 0);
    map<long long, int> counts;
    counts[0] = N;

    for (int i = 0; i < T; ++i) {
        int A, B;
        cin >> A >> B;
        A--;
        counts[scores[A]]--;
        if (counts[scores[A]] == 0)counts.erase(scores[A]);
        scores[A] += B;
        counts[scores[A]]++;
        cout << counts.size() << endl;
    }

    return 0;
}