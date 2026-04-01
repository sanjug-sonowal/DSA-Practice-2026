#include<iostream>
#include<vector>
using namespace std;

int main(){
    int rows;
    int cols;
    cin >> rows;
    cin >> cols;
    vector<vector<int>>v(rows,vector<int>(cols,0));

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout<<v[i][j];
        }
        cout<<endl;
    }
    return 0;
}