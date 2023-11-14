#include<bits/stdc++.h>
using namespace std;

int main() {
  string S, ans;
  cin  >> S;

bool flag = true;
  
for(int i = 0; i < S.size(); i++){
    ans+=S.at(i);
    if(ans.size()>=3 && ans.substr(ans.size() - 3) == "ABC"){
        ans.erase(ans.end()-3, ans.end());
    }
}

  

  cout << ans <<endl;
   
  return 0;
}
