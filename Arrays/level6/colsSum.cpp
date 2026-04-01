#include<iostream>
#include<vector>
using namespace std;

int main(){
    int rows = 3;
    int cols = 3;
    
    vector<vector<int>>mat(rows,vector<int>(cols,0));

    vector<int>colsTotal;

    int counter = 1;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            mat[i][j] = counter++;
        }
    }

    for(int i = 0; i < cols; i++){
        int colsSum = 0;
        for(int j = 0; j < rows; j++){
            colsSum += mat[j][i];
        }
        colsTotal.push_back(colsSum);
    }

    for(int i = 0; i < colsTotal.size(); i++){
        cout<<colsTotal[i]<<endl;
    }
    return 0;
}