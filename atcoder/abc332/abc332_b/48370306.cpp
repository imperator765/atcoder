#include<bits/stdc++.h>
using namespace std;

int main() {
    int K, G, M;
    cin >> K >> G >> M;

    int glass = 0, cup = 0;

    for (int i = 0; i < K; ++i) {
        if (glass == G) {
            glass = 0;
        } else if (cup == 0) {
            cup = M;
        } else {
            int transfer = min(cup, G - glass);
            glass += transfer;
            cup -= transfer;
        }
    }

    cout << glass << " " << cup << endl;

    return 0;
}