#include<bits/stdc++.h>
using namespace std;

bool checkRelation(int N, int M, vector<int> X, vector<int> Y, vector<int> player){
    for(int i = 0; i < N - 1; i++){
        for(int j = 0; j < M; j++){
            if((player[i] == X[j] && player[i + 1] == Y[j]) || (player[i] == Y[j] && player[i + 1] == X[j])){
                return false;
            }
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;
    vector<vector<int>> A(N, vector<int>(N));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> A[i][j];
        }
    }
    int M;
    cin >> M;
    vector<int> X(M), Y(M);
    for(int i = 0; i < M; i++){
        cin >> X[i] >> Y[i];
    }
    vector<int> player(N);
    for(int i = 1; i <= N; i++){
        player[i - 1] = i;
    }
    int ans = INT_MAX;
    do{
        int sum = 0;
        if(checkRelation(N, M, X, Y, player)){
            for(int i = 0; i < N; i++){
                sum += A[player[i] - 1][i];
            }
        }else{
            continue;
        }
        ans = min(ans, sum);
    }while(next_permutation(player.begin(), player.end()));
    if(ans == INT_MAX){
        cout << -1 << endl;
    }else{
        cout << ans << endl;
    }
    return 0;
}