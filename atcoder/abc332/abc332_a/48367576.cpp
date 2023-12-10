#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, S, K;
    cin >> N >> S >> K;

    int totalAmount = 0;

    for (int i = 0; i < N; ++i) {
        int P, Q;
        cin >> P >> Q;
        totalAmount += P * Q;
    }

    int shippingCost = (totalAmount >= S) ? 0 : K;

    int finalAmount = totalAmount + shippingCost;

    cout << finalAmount << endl;

    return 0;
}
