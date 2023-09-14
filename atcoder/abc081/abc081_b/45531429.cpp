#include <bits/stdc++.h>
using namespace std;

int N;
 
int main() {
    cin >> N;
    vector<int> vec(N);
    for (int i = 0; i < N; ++i) {
        cin >> vec.at(i);
    }
    int s = 0;
    int count = 0;
    for (int i = 0; s == 0; i++){
        for (int j = 0; j < N; j++){
            if(vec.at(j) % 2 == 1){
                s = 1;
            }else{
                vec.at(j) = vec.at(j)/2;                
            }
        }
        if(s == 1) {
            break;
        }else{
            count ++;
        }
    }
    cout << count << endl;
}