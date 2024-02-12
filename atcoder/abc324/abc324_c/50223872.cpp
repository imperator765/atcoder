#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string Td;
    cin >> N >> Td;
    vector<string> S(N);
    for(int i = 0; i < N; i++){
        cin >> S[i];
    }

    vector<int> ans;

    for(int i = 0; i < N; i++){
        int lenTd = Td.length();
        int lenS = S[i].length();
        if(abs(lenS - lenTd) > 1) continue;

        if(lenS == lenTd){
            int diff = 0;
            for(int j = 0; j < lenS; j++){
                if(S[i].at(j) != Td.at(j)) diff++;
            }
            if(diff > 1) continue;
        }else{
            string longer = lenS > lenTd ? S[i] : Td;
            string shorter = lenS > lenTd ? Td : S[i];
            int diff = 0;
            for(int j = 0, k = 0; j < shorter.length(); j++, k++){
                if(shorter[j] != longer[k]){
                    if(diff == 0)j--;
                    diff++;
                }
            }
            if(diff > 1) continue;
        }
        ans.push_back(i+1);
    }

    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i];
        if(i != ans.size() - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
