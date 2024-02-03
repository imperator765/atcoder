#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    long long quotient = 1e9 + 7;
    vector<vector<int>> dice(N, vector<int>(6));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < 6; j++){
            cin >> dice[i][j];
        }
    }
    
    vector<long long> point(N);
    for(int j = 0; j < 6; j++){
        point[0] += dice[0][j]; 
    }
        
    for(int i = 1; i < N; i++){
        for(int j = 0; j < 6; j++){
            point[i] += point[i - 1] % quotient * dice[i][j]; 
        }
    }

    cout << point[N - 1] % quotient << endl;

    return 0;
}
