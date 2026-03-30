#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<pair<int,string>>v = {{1,"One"},{2,"Two"},{3,"Three"}};

    for(auto& elems: v){
        cout<<elems.first<<": "<<elems.second<<" ";
    }
    
    return 0;
}