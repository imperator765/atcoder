#include <bits/stdc++.h> 
using namespace std;

int main(){
	int N;
    cin >> N;
    vector<string> S(N);
    for(int i = 0; i < N; i++){
        cin >> S[i];
    }
	
    vector<int> numH(N), numW(N);

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(S[i][j] == 'o'){
                numH[j]++;
                numW[i]++;
            }
        }
    }

    long long ans = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(S[i][j] == 'o'){
                ans += (numH[j] - 1) * (numW[i] - 1);
            }
        }
    }

    cout << ans << endl;

	return 0;
}
