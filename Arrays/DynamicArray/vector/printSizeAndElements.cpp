#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v = {30,20,40,59,60,30};

    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" "<<"\n";
    }

    cout<<v.size();
    return 0;
}