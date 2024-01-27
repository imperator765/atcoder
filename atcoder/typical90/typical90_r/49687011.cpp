#include<bits/stdc++.h>
using namespace std;

int main() {
    long double T, L, X, Y;
    int Q;
    cin >> T >> L >> X >> Y >> Q;
    vector<long double> E(Q);
    for(int i = 0; i < Q; i++){
        cin >> E[i];
    }
    for(int i = 0; i < Q; i++){
        long double hight = (L / 2.0) * sin(- ((2.0 * M_PI) / T) * E[i] - M_PI / 2.0) + (L / 2.0);
        long double posY = (L / 2.0) * cos(- ((2.0 * M_PI) / T) * E[i] - M_PI / 2.0);
        long double horDistance = sqrt((posY - Y) * (posY - Y) + X * X);
        long double ans = atan2(hight , horDistance) / M_PI * 180.0L;
        cout << fixed << setprecision(12);
        cout << ans << endl;
    }
}