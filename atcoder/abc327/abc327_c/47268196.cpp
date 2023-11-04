#include<bits/stdc++.h>
using namespace std;

bool check(vector<vector<int>> A){


    for (int i = 0; i < 9; i++) {
        vector<int> check(10);
        for (int j = 0; j < 9; j++) {
            check[A[i][j]] ++;
        }
        for (int j = 1; j <= 9; j++) {
            if(!(check[j] == 1)){
                return false;
            }
        } 
    }

    for (int i = 0; i < 9; i++) {
        vector<int> check(10);
        for (int j = 0; j < 9; j++) {
            check[A[j][i]]++;
        }
        for (int j = 1; j <= 9; j++) {
            if(!(check[j] == 1)){
                return false;
            }
        } 
    }

    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++){
            vector<int> check(10);
            for (int k = 0; k < 3; k++) {
                for (int l = 0; l < 3; l++){
                    check[A[3*i + l][3*j + k]]++;
                }
            }

            for (int k = 1; k <= 9; k++) {
                if(!(check[k] == 1)){
                    return false;
                }
            }  
        }
    }
    return true;
}

int main() {
    vector<vector<int>> A(9, vector<int>(9));

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> A[i][j];
        }
    }

    if(check(A)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}