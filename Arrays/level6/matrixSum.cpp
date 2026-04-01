#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>>A = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>>B = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>>C(A.size(),vector<int>(A[0].size(),0));

    for(int i = 0; i < A.size(); i++){
        for(int j = 0; j < A[0].size(); j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    for(int i = 0; i < A.size(); i++){
        for(int j = 0; j < A[0].size(); j++){
            cout<<C[i][j];
        }
        cout<<endl;
    }
    return 0;
}