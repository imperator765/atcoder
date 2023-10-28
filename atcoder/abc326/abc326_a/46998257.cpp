#include <iostream>
#include <string>
#include <vector>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int X;
    int Y;
    cin >> X >> Y;

    if((-3 <= Y - X) && (Y - X <= 2)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}