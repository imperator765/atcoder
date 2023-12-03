#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, L, R;
    cin >> N >> L >> R;

    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    vector<int> X(N);

    for(int i = 0; i < N; i++){
        if(A[i] > R){
            X[i] = R;
        }else if(A[i] < L){
            X[i] = L;
        }else{
            X[i] = A[i];
        }
    }

    for(int i = 0; i < N; i++){
        if(!(i == N - 1)){
            cout << X[i] << " ";
        }else{
            cout << X[i];
        }
    }
   
    return 0;
}