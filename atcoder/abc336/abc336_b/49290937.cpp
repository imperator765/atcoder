#include<bits/stdc++.h>
using namespace std;

int ctz(int N) {
    int count = 0;
    while ((N & 1) == 0) {
        N >>= 1;
        count++;
    }
    return count;
}

int main() {
    int N;
    cin >> N;
    int result = ctz(N);
    cout << result << endl;
    return 0;
}