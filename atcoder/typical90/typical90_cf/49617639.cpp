#include <bits/stdc++.h>
using namespace std;

int main(){
        long N;
        string S;
        cin >> N >> S;

        vector<long> check;
        long count = 1;
        for(long i = 1; i < N; i++){
                if(S.at(i - 1) == S.at(i)){
                        count++;
                }else{
                        check.push_back(count);
                        count = 1;
                }
        }
        if(!(count == 1)){
                check.push_back(count);
        }

        long allCombinations = N * (N - 1) / 2;
        long impossibleCombinations = 0;
        for(long i = 0; i < check.size(); i++){
                if(!(check[i] == 1)){
                        impossibleCombinations += check[i] * (check[i] - 1) / 2;
                }
        }

        cout << allCombinations - impossibleCombinations << endl;

        return 0;
}