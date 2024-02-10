#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        int N, A, B;
        cin >> N >> A >> B;

        if(A > N){
            cout << "No" << endl;
            continue;
        }

        if(A <= N/2){
            if(B <= (N + 1) / 2 * (N - A)){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }else{
            if(B <= (N - A) * (N -A)){
                cout <<  "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }
    }

    return 0;
}
