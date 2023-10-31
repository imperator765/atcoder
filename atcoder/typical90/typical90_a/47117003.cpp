#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int L;
    int K;
    cin >> N >> L >> K;
    vector<int> A(N);
    
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    int left = -1;
    int right = L + 1;

    while(right - left > 1){
        int mid = (left + right)/2;
        int count = 0;
        int last = 0;
        for(int i = 0; i < N; i++){
            if(A[i] - last >= mid){
                count ++;
                last = A[i];
            }
        }
        if(L - last >= mid){
            count ++;
        }
        if(count >= K + 1){
            left = mid;
        }else{
            right = mid;
        }
    }
    cout << left << endl;
}