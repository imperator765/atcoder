#include <iostream> 
#include <algorithm>
#include <string>
#include <vector>
#include <numeric>
#include <cstdlib>
using namespace std; 

int main() {
  int T;
  cin >> T;

  vector<int> N(T);
  vector<string> X(T);
  vector<string> Y(T);

  vector<string> answer(T);

  for(int i = 0; i < T; i++){
    cin >> N[i];
    cin >> X[i];
    cin >> Y[i];
  }

  for(int i = 0; i < T; i++){
    vector<int> count;
    answer[i]="Yes";
    for(int j = 0; j < N[i]; j++){
      if(Y[i].at(j) == 'C'){
        if(X[i].at(j) == 'C'){
          count.insert(count.end(), j);
        }else{
          answer[i] = "No";
          break;
        }
      }
    }


    int countAX = 0;
    int countCX = 0;
    int countAY = 0; 
    if(answer[i] == "Yes"){
      for(int j = 0; j< N[i]; j++){
        if(find(count.begin(), count.end(), j ) != count.end()){
          if(countAX > countAY){
          answer[i] = "No";
          break;
        }
          countAX = 0;
          countCX = 0;
          countAY = 0;
        }else{
        if(X[i].at(j) == 'A'){
          countAX ++;
        }
        if(X[i].at(j) == 'C'){
          countCX ++;
        }
        if(Y[i].at(j) == 'A'){
          countAY ++;
        }
        if(countAX + countCX < countAY){
          answer[i] = "No";
          break;
        }
      }
      }
    }
          if(countAX > countAY){
          answer[i] = "No";
        }    

    int countBX = 0;
    countCX = 0;
    int countBY = 0; 
    if(answer[i] == "Yes"){
      for(int j = N[i] - 1; j >= 0; j--){
        if(find(count.begin(), count.end(), j ) != count.end()){
          if(countBX > countBY){
          answer[i] = "No";
          break;
        }
          countBX = 0;
          countCX = 0;
          countBY = 0;
        }else{
        if(X[i].at(j) == 'B'){
          countBX ++;
        }
        if(X[i].at(j) == 'C'){
          countCX ++;
        }
        if(Y[i].at(j) == 'B'){
          countBY ++;
        }
        if(countBX + countCX < countBY){
          answer[i] = "No";
          break;
        }
      }
      }
    }
          if(countBX > countBY){
          answer[i] = "No";
        }    
  }

  for(int i = 0; i < T; i++){
    cout << answer[i] << endl;
  }

}
