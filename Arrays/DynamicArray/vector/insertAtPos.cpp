#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v = {2,3,4,5,5,6,6};
    int pos = 3;
    int val = 30;

    v.insert(v.begin() + pos,val);

    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<endl;
    }
    return 0;
}