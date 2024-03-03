#include<bits/stdc++.h>
using namespace std;

int calculateOverlap(int a1, int b1, int c1, int a2, int b2, int c2) {
    int xOverlap = max(0, min(a1 + 7, a2 + 7) - max(a1, a2));
    int yOverlap = max(0, min(b1 + 7, b2 + 7) - max(b1, b2));
    int zOverlap = max(0, min(c1 + 7, c2 + 7) - max(c1, c2));
    return xOverlap * yOverlap * zOverlap;
}

int calculateAllOverlap(int a1, int b1, int c1, int a2, int b2, int c2, int a3, int b3, int c3) {
    int xOverlap = max(0, min({a1 + 7, a2 + 7, a3 + 7}) - max({a1, a2, a3}));
    int yOverlap = max(0, min({b1 + 7, b2 + 7, b3 + 7}) - max({b1, b2, b3}));
    int zOverlap = max(0, min({c1 + 7, c2 + 7, c3 + 7}) - max({c1, c2, c3}));
    return xOverlap * yOverlap * zOverlap;
}

int main() {
    int V1, V2, V3;
    cin >> V1 >> V2 >> V3;
    for (int a2 = -7; a2 <= 7; a2++) {
        for (int b2 = -7; b2 <= 7; b2++) {
            for (int c2 = -7; c2 <= 7; c2++) {
                for (int a3 = -7; a3 <= 7; a3++) {
                    for (int b3 = -7; b3 <= 7; b3++) {
                        for (int c3 = -7; c3 <= 7; c3++) {
                            int V3_calc = calculateAllOverlap(0, 0, 0, a2, b2, c2, a3, b3, c3);
                            int V2_calc = calculateOverlap(0, 0, 0, a2, b2, c2) + calculateOverlap(0, 0, 0, a3, b3, c3) + calculateOverlap(a2, b2, c2, a3, b3, c3) - 3 * V3_calc;
                            int V1_calc = 7 * 7 * 7 * 3 -  V2_calc * 2 - V3_calc * 3;
                            if (V3_calc == V3 && V2_calc == V2 && V1_calc == V1) {
                                cout << "Yes" << endl;
                                cout << "0 0 0 " << a2 << " " << b2 << " " << c2 << " " << a3 << " " << b3 << " " << c3 << endl;
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }

    cout << "No" << endl;

    
    return 0;
}