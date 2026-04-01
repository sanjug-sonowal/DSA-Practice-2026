#include<iostream>
#include<vector>
using namespace std;

int main(){
    int rows = 3;
    int cols = 3;
    vector<vector<int>>mat(rows,vector<int>(cols,0));
    int counter = 1;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            mat[i][j] = counter++;
        }
    }

    vector<int>diag;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == j){
                diag.push_back(mat[i][j]);
            }
        }
    }

    for(int i = 0; i < diag.size(); i++){
        cout<<diag[i]<<endl;
    }
    return 0;
}