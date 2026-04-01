#include<iostream>
#include<vector>
using namespace std;

int main(){
    int rows = 3;
    int cols = 3;
    vector<vector<int>>mat(rows,vector<int>(cols,0));
    int counter = 1;
    for(int i = 0;i < rows; i++){
        for(int j = 0; j < cols; j++){
            mat[i][j] = counter++;
        }
    }

    vector<int>rowTotal;
    for(int i = 0; i < rows; i++){
        int rowSum = 0;
        for(int j = 0; j < cols; j++){
            rowSum += mat[i][j];
        }
        rowTotal.push_back(rowSum);
    }

    for(int i = 0; i < rowTotal.size(); i++){
        cout<<rowTotal[i]<<endl;
    }
    return 0;
}