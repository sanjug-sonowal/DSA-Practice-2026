#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>>mat = {{1,3,4},{3,5,6},{6,4,2}};

    vector<int>result;

    for(int i = 0; i < mat.size(); i++){
        int rowMax = INT_MIN;
        for(int j = 0; j < mat[0].size(); j++){
            if(mat[i][j] > rowMax){
                rowMax = mat[i][j];
            }
        }
        result.push_back(rowMax);
    }

    for(int i = 0; i < result.size(); i++){
        cout<<result[i]<<endl;
    }
    return 0;
}