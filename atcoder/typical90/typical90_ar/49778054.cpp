#include<bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

int main() {
    int N, Q;
    cin >> N >> Q;
    deque<int> A;
    vector<vector<int>> Txy(Q, vector<int>(3));
    for(int i = 0; i < N; i++) {
        int a;
        cin >> a;
        A.push_back(a);
    }
    for(int i = 0; i < Q; i++) cin >> Txy[i][0] >> Txy[i][1] >> Txy[i][2];
    for(int i = 0; i < Q; i++){
        if(Txy[i][0] == 1){
            swap(A[Txy[i][1] - 1], A[Txy[i][2] - 1]);
        }else if(Txy[i][0] == 2){
            A.push_front(A.back());
            A.pop_back();
        }else if(Txy[i][0] == 3){
            cout << A[Txy[i][1] - 1] << endl;
        }
    }
    return 0;
}