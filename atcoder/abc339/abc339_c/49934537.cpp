#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // 乗客の増減をシミュレート
    long long passengers = 0;
    for(int i = 0; i < N; ++i) {
        passengers += A[i];
        // 乗客数が負になった場合、開始時の乗客数を増やす必要がある
        if(passengers < 0) {
            passengers = 0;
        }
    }

    cout << passengers << endl;
    return 0;
}
