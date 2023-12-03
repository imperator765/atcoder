#include<bits/stdc++.h>
using namespace std;

int main() {
    long D;
    cin >> D;

    long ans = D;

    for(long x = 0; x <= ceil(sqrt(D)); x++){
        long y;
        if(abs(D - x * x - floor(sqrt(D - x * x)) * floor(sqrt(D - x * x))) > abs(D - x * x - ceil(sqrt(D - x * x)) * ceil(sqrt(D - x * x)))){
            y = ceil(sqrt(D - x * x ));
        }else{
            y = floor(sqrt(D - x * x));
        }

        ans = min(ans, abs(x * x + y * y - D));
    }

    cout << ans << endl;
   
    return 0;
}