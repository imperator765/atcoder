#include<bits/stdc++.h>
using namespace std;

int main() {
    long B = 0;
    cin >> B;

    long ans = 0;
    
    for(long i = 1; powl(i, i) <= B; i ++){
        if(powl(i, i) == B){
            ans = i;
            break;
        }
    }

    if(ans == 0){
        ans = -1;
    }

    cout << ans << endl;

    return 0;
}