#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, L;
    cin >> N >> L;
    vector<long long> steps(N + 1);
    long long quotient = 1e9 + 7;

    steps[0] = 1;
    for(int i = 1; i <= N; i++){
        steps[i] = steps[i - 1];
        if(i >= L){
            steps[i] = steps[i - 1] + steps[i - L];
        }
        steps[i] %= quotient;
    }

    cout << steps[N] << endl;

    return 0;
}
