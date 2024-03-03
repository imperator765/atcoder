#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(3 * N);

    for(int i = 0; i < 3 * N; i++){
        cin >> A[i];
    }

    vector<int> time(N + 1);

    for(int i = 0; i < 3 * N; i++){
        time[A[i]]++;
        if(time[A[i]] == 2){
            cout << A[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
