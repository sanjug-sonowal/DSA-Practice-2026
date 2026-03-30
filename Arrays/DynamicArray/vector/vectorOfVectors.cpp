#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>>mat(3,vector<int>(4,0));
    int count = 1;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<"/ ";
    }

    return 0;
}