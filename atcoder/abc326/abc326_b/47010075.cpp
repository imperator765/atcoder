#include <iostream>
#include <string>
#include <vector>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int N;
    cin >> N;

    while(!(((N / 100) * ((N % 100) / 10)) ==  N % 10)){
        N ++;
    }

    cout << N << endl;
}