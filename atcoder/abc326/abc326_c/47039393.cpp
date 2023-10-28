#include <iostream>
#include <string>
#include <vector>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int N;
    int M;
    
    cin >> N >> M;

    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    vector<int> intervals(N - 1);
    for (int i = 0; i < N - 1; i++) {
        intervals[i] = A[i + 1] - A[i];
    }

    int ans = 0;
    int left = 0;
    int right = 0;
    int sum = 0;

    while (left < N) {
    while (right < N - 1 && sum + intervals[right] < M) {
      sum += intervals[right];
      right++;
    }
    ans = max(ans, (right - left + 1));
    if (left == right) {
      right++;
    } else {
      sum -= intervals[left];
    }
    left++;
  }

  cout << ans << endl;
}