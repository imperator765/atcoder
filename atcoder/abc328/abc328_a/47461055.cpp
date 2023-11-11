#include<bits/stdc++.h>
using namespace std;

int main() {
    int N = 0;
    int X = 0;
    cin >> N >> X;

    vector<int> S(N);

    for(int i = 0; i < N; i++){
        cin >> S[i];
    }

    int sum = 0;

    for(int i = 0; i < N; i++){
        if(S[i] <= X){
            sum += S[i];
        }
    }

    cout << sum << endl;

    return 0;
}