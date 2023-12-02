#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    set<string> check;

    for(int i = 0; i < N; i++){
        string S;
        cin >> S;
        if(check.insert(S).second){
            cout << i + 1 << endl;
        }
    }

    return 0;
}