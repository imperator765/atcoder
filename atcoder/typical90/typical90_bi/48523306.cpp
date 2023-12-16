#include<bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    vector<int> t(Q);
    vector<int> x(Q);
    for(int i=0; i<Q; i++){
        cin >> t[i] >> x[i];
    }

    vector<int> deck(0);

    for(int i=0; i<Q; i++){
        if(t[i]==1){
            deck.insert(deck.begin(), x[i]);
        }else if(t[i]==2){
            deck.insert(deck.end(), x[i]);
        }else{
            cout << deck[x[i]-1] << endl;
        }
    }
    
    return 0;
}