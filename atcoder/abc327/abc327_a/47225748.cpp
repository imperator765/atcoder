#include<bits/stdc++.h>
using namespace std;

int main() {
    int N = 0;
    string S = "";
    cin >> N >> S;

    bool ans = false;

    for(int i = 0; i < N - 1; i++){
        if(((S.at(i) == 'a')&&(S.at(i+1) == 'b')) ||((S.at(i) == 'b')&&(S.at(i+1) == 'a'))){
            ans = true;
            break;
        }
    }

    if(ans){
        cout << "Yes" << endl;
    }else{
         cout << "No" << endl;
    }

    return 0;
}