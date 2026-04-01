#include<iostream>
#include<vector>
using namespace std;

int main(){
    int rows = 3;
    int cols = 3;
    int counter = 1;
    vector<vector<int>>mat(rows,vector<int>(cols,0));

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            mat[i][j] = counter++;
        }
    }

    vector<vector<int>>result(rows,vector<int>(cols,0));

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            result[i][j] = mat[j][i];
        }
    }

    for(int i = 0; i < result.size(); i++){
        for(int j = 0; j < result[0].size(); j++){
            cout<<result[i][j];
        }
        cout<<endl;
    }
    return 0;
}