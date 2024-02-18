#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


struct Rectangle {
    long long length, width;
    bool operator<(const Rectangle& rhs) const {
        long long maxSide = max(length, width);
        long long minSide = min(length, width);
        long long rhsMaxSide = max(rhs.length, rhs.width);
        long long rhsMinSide = min(rhs.length, rhs.width);
        if (maxSide == rhsMaxSide) return minSide < rhsMinSide;
        return maxSide < rhsMaxSide;
    }
};

bool canDistribute(long long H, long long W, int N, vector<int>& A) {
    long long needed = 0;
    for (int i = 0; i < N; ++i) {
        needed += (1LL << A[i]) * (1LL << A[i]);
    }
    
    long long available = H * W;
    
    if (needed > available) return false;
    
    sort(A.rbegin(), A.rend());
    
    vector<Rectangle> rectangles = {{H, W}};
    
    for (int a : A) {
        long long size = 1LL << a;
        bool found = false;
        sort(rectangles.begin(), rectangles.end());
        for (auto it = rectangles.begin(); it != rectangles.end(); ) {
            auto [h, w] = *it;
            if (h >= size && w >= size) {
                found = true;
                Rectangle newRect1 = {max(h, w) - size, min(h, w)};
                Rectangle newRect2 = {size, min(h, w) - size};
                it = rectangles.erase(it);
                if (newRect1.length > 0 && newRect1.width > 0) rectangles.push_back(newRect1);
                if (newRect2.length > 0 && newRect2.width > 0) rectangles.push_back(newRect2);
                break;
            } else {
                ++it;
            }
        }
        if (!found) return false;
    }
    return true;
}

int main() {
    long long H, W;
    int N;
    cin >> H >> W >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    cout << (canDistribute(H, W, N, A) ? "Yes" : "No") << endl;
    
    return 0;
}
