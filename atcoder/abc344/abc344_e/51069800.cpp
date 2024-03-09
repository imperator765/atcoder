#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N;

    list<int> A;
    unordered_map<int, list<int>::iterator> position;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        A.push_back(x);
        auto it = A.end();
        --it;
        position[x] = it;
    }

    cin >> Q;

    for (int i = 0; i < Q; i++) {
        int type, x;
        cin >> type >> x;

        if (type == 1) {
            int y;
            cin >> y;
            auto it = position[x];
            ++it;
            A.insert(it, y);
            position[y] = --it;
        } else if (type == 2) {
            auto it = position[x];
            A.erase(it);
            position.erase(x);
        }
    }

    for (auto x : A) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
