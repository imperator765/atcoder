#include<bits/stdc++.h>
using namespace std;

long long generateRepunit(int n) {
    string repunit(n, '1');
    return stoll(repunit);
}

int main() {
    int N;
    cin >> N;

    set<long long> sums;
    for (int i = 1; i <= 12; ++i) {
        for (int j = i; j <= 12; ++j) {
            for (int k = j; k <= 12; ++k) {
                long long sum = generateRepunit(i) + generateRepunit(j) + generateRepunit(k);
                sums.insert(sum);
            }
        }
    }

    auto it = sums.begin();
    advance(it, N - 1);
    cout << *it << endl;

    return 0;
}
