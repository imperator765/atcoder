#include<bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    for(int i = 0; i < H; i++){
        cin >> S[i];
    }

    string snuke = "snuke";

    vector<int> dh{1, 1, 1, 0, -1, -1, -1, 0};
    vector<int> dw{-1, 0, 1, 1, 1, 0, -1, -1};

    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            for(int k = 0; k < 8; k++){
                vector<pair<int, int>> ans;
                bool flag = true;
                for(int l = 0; l < 5; l++){
                    int nh = i + dh[k] * l;
                    int nw = j + dw[k] * l;
                    if(nh >= 0 && nh < H && nw >= 0 && nw < W && S[nh][nw] == snuke[l]){
                        ans.push_back({nh, nw});
                    }else{
                        flag = false;
                        continue;
                    }
                }
                if(flag){
                    for(int l = 0; l < 5; l++){
                        cout << ans[l].first + 1 << " " << ans[l].second + 1 << endl;   
                    }
                    return 0;
                }
            }
        }
    }
    return 0;
}
