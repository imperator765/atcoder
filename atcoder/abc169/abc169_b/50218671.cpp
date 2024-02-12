#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
        if(A[i] == 0){
            cout << 0 << endl;
            return 0;
        }
    }

    for(int i = 0; i < N; i++){
        if(i != 0){
            if(A[i] > 1000000000000000000 / A[i - 1]){
                cout << -1 << endl;
                return 0;
            }
            A[i] = A[i] * A[i - 1];
        }
    }

    cout << A[N - 1] << endl; 

    return 0;
}
