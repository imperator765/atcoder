#include<bits/stdc++.h>
using namespace std;

int main() {
    int M;
    vector<string> S(3);
    cin >> M >> S[0] >> S[1] >> S[2];

    int ans = 3 * M;
    for(int i = 0; i < 3 * M; i++){
        for(int j = 0; j < 3 * M; j++){
            for(int k = 0; k < 3 * M; k++){
                if(i != j && j != k && k != i && S[0][i % M] == S[1][j % M] && S[1][j % M] == S[2][k % M]){
                    ans = min(ans, max(i, max(j, k)));
                }
            }
        }
    }
    if(ans == 3 * M){
        cout << -1 << endl;
    }else{
        cout << ans << endl;
    }

    return 0;
}
