#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> numbers;
    int num;
    
    while (cin >> num) {
        numbers.push_back(num);
    }

    for (int i = numbers.size() - 1; i >= 0; i--) {
        cout << numbers[i] << endl;
    }

    return 0;
}
