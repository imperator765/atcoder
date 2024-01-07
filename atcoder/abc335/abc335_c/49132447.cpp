#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    deque<pair<int, int>> dragon;
    for (int i = 1; i <= N; ++i) {
        dragon.push_back(make_pair(i, 0));
    }


    for (int i=0; i<Q; i++) {
        int query_type;
        cin >> query_type;

        if (query_type==1) {
            char C;
            cin >> C;

            pair<int, int> last = dragon.front();
            if (C=='R') last.first++;
            else if(C=='L') last.first--;
            else if(C=='U') last.second++;
            else if(C=='D') last.second--;
            dragon.push_front(last);

        } else if (query_type= 2) {
            int p;
            cin >> p;
            cout << dragon[p-1].first << " " << dragon[p-1].second << endl;
        }
    }

    return 0;
}