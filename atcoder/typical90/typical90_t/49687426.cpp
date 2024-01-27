#include<bits/stdc++.h>
using namespace std;

int main() {
    long long a, b ,c;
    cin >> a >> b >> c;
    //log2(a) < blog2(c) <-> log2(a/c^b) < 0 <-> a/c^b < 1
    long long powcb = 1;
    for(int i = 0; i < b; i++){
        powcb *= c;
    }
    if(a < powcb){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}