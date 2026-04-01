#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>>mat = {{1,2,3},
                            {4,5,6},
                            {7,8,9}};
    int n = mat.size();
    for(int i = 0; i <= n - 1; i++){
        cout<<mat[i][n - 1 - i]<<endl;
    }
}