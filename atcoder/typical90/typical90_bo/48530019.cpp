#include<bits/stdc++.h>
using namespace std;

int main() {
    string N;
    int K;
    cin >> N >> K;

    for(int i = 0; i < K; i++){
        long long value = 0;
        long long base = 1;
        for(int j = N.size() - 1; j >= 0; j--){
            value += base * (N[j] - '0');
            base *= 8;
        }
        N = "";
        while(value > 0){
            if(value % 9 == 8){
                N = "5" + N;
            } else {
                N = to_string(value % 9) + N;
            }
            value /= 9;
        }
        if(N.empty()){
            N = "0";
        }
    }
    cout << N << endl;
}
