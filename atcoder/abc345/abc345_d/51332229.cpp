#include <bits/stdc++.h>
using namespace std;

int N, H, W;
vector<pair<int, int>> tiles;

bool fit(int h, int w, vector<vector<bool>>& placed, vector<bool>& used) {
    if (h == H) return true;
    if (w == W) return fit(h + 1, 0, placed, used);
    if (placed[h][w]) return fit(h, w + 1, placed, used);

    for (int i = 0; i < N; i++) {
        if (used[i]) continue;

        int a = tiles[i].first, b = tiles[i].second;
        for (int rot = 0; rot < 2; rot++) {
            if (h + a <= H && w + b <= W) {
                bool canPlace = true;
                for (int dh = 0; dh < a && canPlace; dh++) {
                    for (int dw = 0; dw < b; dw++) {
                        if (placed[h + dh][w + dw]) {
                            canPlace = false;
                            break;
                        }
                    }
                }
                if (canPlace) {
                    for (int dh = 0; dh < a; dh++) {
                        for (int dw = 0; dw < b; dw++) {
                            placed[h + dh][w + dw] = true;
                        }
                    }
                    used[i] = true;
                    if (fit(h, w + 1, placed, used)) return true;
                    for (int dh = 0; dh < a; dh++) {
                        for (int dw = 0; dw < b; dw++) {
                            placed[h + dh][w + dw] = false;
                        }
                    }
                    used[i] = false;
                }
            }
            swap(a, b);
        }
    }

    return false;
}

int main() {
    cin >> N >> H >> W;
    tiles.resize(N);
    for (int i = 0; i < N; ++i) {
        cin >> tiles[i].first >> tiles[i].second;
    }

    vector<vector<bool>> placed(H, vector<bool>(W, false));
    vector<bool> used(N, false);
    if (fit(0, 0, placed, used)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
