#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        vector<long long> A(5), P(5);
        for (int i = 0; i < 5; ++i) cin >> A[i];
        for (int i = 0; i < 5; ++i) cin >> P[i];
        
        long long total_reviews = accumulate(A.begin(), A.end(), 0LL);
        long long current_score = 0;
        for (int i = 0; i < 5; ++i) {
            current_score += A[i] * (i + 1);
        }

        long long needed_score = total_reviews * 3 - current_score;

        vector<pair<long long, int>> options; // {賄賂のコスト, 評価の増加量}
        if (needed_score > 0) {
            if(P[3] * 2 < P[4] * 1){
                options.push_back({P[3], 1});
                options.push_back({P[4], 2});
            }else{
                options.push_back({P[4], 2});
                options.push_back({P[3], 1});
            }

            long long total_cost = 0;
            if(needed_score % 2 == 0){
                total_cost = needed_score * options[0].first / options[0].second;
            }else if(options[0].second == 1){
                total_cost = needed_score * options[0].first / options[0].second;
            }else{
                if(options[0].first > options[1].first){
                    total_cost = (needed_score / options[0].second) * options[0].first + options[1].first;
                }else{
                    total_cost = (needed_score / options[0].second) * options[0].first + options[0].first;
                }
            }
            cout << total_cost << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}

