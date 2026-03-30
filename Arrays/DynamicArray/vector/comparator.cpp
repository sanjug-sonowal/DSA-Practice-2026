#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<pair<int,char>>v = {{3,'a'},{1,'c'},{2,'b'}};

    sort(v.begin(),v.end(), [&](
        auto& a,
        auto& b
    ){
        return a.second < b.second;
    });

    for(auto& ele: v){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
    return 0;
}