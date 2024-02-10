#include<bits/stdc++.h>
using namespace std;

int main() {
    long long N, D, P;
    cin >> N >> D >> P;
    vector<long long> F(N);
    for(int i = 0; i < N; i++){
        cin >> F[i];
    }

    sort(F.begin(), F.end());
    for(int i = 0; i < N - 1; i++){
        F[i + 1] += F[i];
    }

    long long pass_use=0;
    long long ans=F[N - 1];

    while(N >= 0){
        pass_use++;
        N = N - D;
        long long sum=0;
        sum += P * pass_use;
        if(N - 1 >= 0) sum += F[N - 1];
        ans = min(ans, sum);
    }

    cout << ans << endl;
    return 0;
}