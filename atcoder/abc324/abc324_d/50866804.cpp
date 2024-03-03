#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    sort(S.begin(), S.end());

    vector<string> powStrings;
    long max = pow(10, N);
    for(long i = 0; i * i < max; i++){
        long square = (long)i * i;
        string powS = to_string(square);
        while(powS.length() < N) {
            powS = '0' + powS;
        }
        sort(powS.begin(), powS.end());
        powStrings.push_back(powS);
    }

    int count = 0;

    for(auto x : powStrings) {
        if(x == S){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
