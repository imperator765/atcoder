#include<bits/stdc++.h>
using namespace std;

struct Point{
    long long to;
    long long x, y;
    Point( long long to = -1, long long x = 0, long long y = 0) : to(to), x(x), y(y){}
};

int main() {
    long long N, M;
    cin >> N >> M;
    vector<vector<Point>> tree(N + 1);

    for(long long i = 0; i < M; i++){
        long long A, B, X, Y;
        cin >> A >> B >> X >> Y;
        tree[A].push_back({B, X, Y});
        tree[B].push_back({A, -X, -Y});
    }
    
    queue<long long> que;
    vector<Point> coords(N + 1);
    vector<bool> visited(N + 1, false);
    que.push(1);
    visited[1] = true;

    
    while(!que.empty()){
        long long current =  que.front();
        que.pop();

        for(auto &point : tree[current]){
            long long to = point.to;
            if (!visited[to]) {
                visited[to] = true;
                que.push(to);
                coords[to] = Point(coords[current].to, coords[current].x + point.x, coords[current].y + point.y);
            }
        }
    }

    for(long long i = 1; i <= N; i++){
        if(visited[i]){
            cout << coords[i].x << " " << coords[i].y << endl;
        }else{
            cout << "undecidable" << endl;
        }
    }
    
    return 0;
}
