#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    long long K;
    cin >> N >> K;
    
    long long totalSum = K * (K + 1) / 2;
    
    unordered_set<long long> numbers;
    for (int i = 0; i < N; ++i) {
        long long a;
        cin >> a;
        if (a <= K) numbers.insert(a);
    }

    long long sumInA = 0;
    for (auto num : numbers) {
        sumInA += num;
    }
    
    cout << totalSum - sumInA << endl;
    
    return 0;
}
