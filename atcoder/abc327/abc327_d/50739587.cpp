#include <bits/stdc++.h> 
using namespace std;

int main(){
	int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);

    for(int i = 0; i < M; i++){
        cin >> A[i];
    }
    for(int i = 0; i < M; i++){
        cin >> B[i];
    }
    vector<vector<int>> graph(N);
    for(int i = 0; i < M; i++){
        graph[A[i] - 1].push_back(B[i] - 1);
        graph[B[i] - 1].push_back(A[i] - 1);
    }

    vector<int> X(N, -1);

    for(int i = 0; i < N; i++){
        if(X[i] == -1){
            X[i] = 1;
            stack<int> st;
            st.push(i);
            while(!st.empty()){
                int num = st.top();
                st.pop();
                for(const auto& e : graph[num]){
                    if(X[e] == -1){
                        X[e] = 1 - X[num];
                        st.push(e);
                    }else if(X[num] == X[e]){
                        cout << "No" << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << "Yes" << endl;

	return 0;
}
