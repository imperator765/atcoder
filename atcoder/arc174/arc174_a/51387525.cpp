#include <bits/stdc++.h>
using namespace std;

long long solveSum(const vector<int>& nums, bool findMax) {
    long long result = nums[0];
    long long tempSum = nums[0];
    for (size_t i = 1; i < nums.size(); ++i) {
        if (findMax) {
            tempSum = max((long long)nums[i], tempSum + nums[i]);
            result = max(result, tempSum);
        } else {
            tempSum = min((long long)nums[i], tempSum + nums[i]);
            result = min(result, tempSum);
        }
    }
    return result;
}

int main() {
    int N;
    long long C;
    cin >> N >> C;
    
    vector<int> A(N);
    for (int& a : A) cin >> a;

    long long totalSum = accumulate(A.begin(), A.end(), 0LL);

    if (C > 0) {
        long long maxIncrease = (solveSum(A, true) * C) - solveSum(A, true);
        cout << totalSum + max(0LL, maxIncrease) << endl;
    } else {
        long long minDecrease = (solveSum(A, false) * C) - solveSum(A, false);
        cout << totalSum + max(0LL, minDecrease) << endl;
    }

    return 0;
}
