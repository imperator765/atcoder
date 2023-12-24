#include<bits/stdc++.h>
using namespace std;

int main() {
    long N, K;
    cin >> N >> K;

    vector<long> A(K);
    for (long i = 0; i < K; ++i) {
        cin >> A[i];
    }
    long ans=0;

    if((2*N-K)%2==0){
        for(long i=0; i<K; i++){
            if(i%2==1){
                ans+=A[i]-A[i-1];
            }
        }
    }else{
        vector<long> B(K+1);
        vector<long> E(K+1);
        for(long i=2; i<=K; i++){
            B[i]=B[i-1];
            if(i%2==0){
                B[i]+=A[i-1]-A[i-2];
            }
        }
        for(long i=K-2; i>=0; i--){
            E[i]=E[i+1];
            if((K-i)%2==0){
                E[i]+=A[i+1]-A[i];
            }
        }
        ans = 2*N;
        for(long i=0; i<=K; i++){
            ans=min(ans, B[i]+E[i]);
        }
    }
    cout << ans << endl;
    return 0;
}