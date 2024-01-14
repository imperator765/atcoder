#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N + 2);
    for (int i = 1; i <= N; ++i) {
        cin >> A[i];
    }

    vector<int> l(N + 1), r(N + 2);
    for (int i = 1; i <= N; ++i) {
        l[i] = min(A[i], l[i - 1] + 1);
    }

    for (int i = N; i >= 1; --i) {
        r[i] = min(A[i], r[i + 1] + 1);
    }

    int max_pyramid = 0;
    for (int i = 1; i <= N; ++i) {
        max_pyramid = max(max_pyramid, min(l[i], r[i]));
    }

    cout << max_pyramid << endl;
    return 0;
}
