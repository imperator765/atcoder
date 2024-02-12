#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M);
    vector<string> S(N);
    for(int i = 0; i < M; i++){
        cin >> A[i];
    }
    for(int i = 0; i < N; i++){
        cin >> S[i];
    }

    vector<int> point(N);
    int maxPoint=0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(S[i][j] == 'o'){
                point[i] += A[j];
            }
        }
        point[i] += i + 1;
        maxPoint = max(maxPoint, point[i]);
    }

    vector<pair<int, int>> A_with_index;

    for (int i = 0; i < A.size(); ++i) {
        A_with_index.push_back(make_pair(A[i], i));
    }

    std::sort(A_with_index.begin(), A_with_index.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
        return a.first > b.first;
    });

    for(int i = 0; i < N; i++){
        if(point[i] == maxPoint){
            cout << 0 << endl;
            continue;
        }
        int count=0;
        for(int j = 0; j < M; j++){
            if(S[i][A_with_index[j].second] == 'x'){
                point[i] += A_with_index[j].first;
                count++;
                if(point[i] > maxPoint){
                    cout << count << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
