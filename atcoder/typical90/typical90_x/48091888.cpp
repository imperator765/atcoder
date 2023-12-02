#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int K;
    cin >> N >> K;

    vector<int> A(N);
    vector<int> B(N);

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    for(int i = 0; i < N; i++){
        cin >> B[i];
    }

    bool flag = true;
    long count = 0;

    for(int i = 0; i < N; i++){
        count += abs(A[i] - B[i]);
    }

    if(count > K || ((count <= K) && (K - count) % 2 == 1)){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }

    return 0;
}