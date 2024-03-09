#include<bits/stdc++.h>
using namespace std;

int main() {
    string T;
    cin >> T;
    int N;
    cin >> N;
    vector<vector<string>> bags(N);
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        bags[i].resize(A);
        for (int j = 0; j < A; j++) {
            cin >> bags[i][j];
        }
    }

    int L = T.size();
    vector<int> dp(L+1, INT_MAX);
    dp[0] = 0;

    for (auto& bag : bags) {
        vector<int> new_dp(dp);
        for (auto& s : bag) {
            int M = s.size();
            for (int i = 0; i <= L-M; i++) {
                if (dp[i] != INT_MAX && T.substr(i, M) == s) {
                    new_dp[i+M] = min(new_dp[i+M], dp[i] + 1);
                }
            }
        }
        dp = new_dp;
    }

    int ans = dp[L] == INT_MAX ? -1 : dp[L];


    cout << ans << endl;

    return 0;
}
