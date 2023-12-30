#include<bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector<int>> A(H, vector<int>(W)), B(H, vector<int>(W));
    
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cin >> A[i][j];
        }
    }

    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cin >> B[i][j];
        }
    }

    vector<int> I(H);
    vector<int> J(W);
    for(int i=0; i<H; i++){
        I[i]=i;
    }
    for(int i=0; i<W; i++){
        J[i]=i;
    }

    int ans=1000000000;
    do{
        do{
            bool flag=true;
            for(int i=0; i<H; i++){
                for(int j=0; j<W; j++){
                    if(!(A[I[i]][J[j]]==B[i][j])){
                        flag=false;
                    }
                }
            }
            int countI=0;
            int countJ=0;
            if(flag){
                for(int i=0; i<H; i++){
                    for(int j=0; j<H; j++){
                        if(i<j&&I[i]>I[j]){
                            countI++;
                        }
                    }
                }
                for(int i=0; i<W; i++){
                    for(int j=0; j<W; j++){
                        if(i<j&&J[i]>J[j]){
                            countJ++;
                        }
                    }
                }
            ans=min(ans, countI+countJ);
            }else{
                continue;
            }
        }while(next_permutation(J.begin(), J.end()));
    }while(next_permutation(I.begin(), I.end()));

    if(ans==1000000000){
        cout << -1 << endl;
    }else{
        cout << ans << endl;
    }

    return 0;
}