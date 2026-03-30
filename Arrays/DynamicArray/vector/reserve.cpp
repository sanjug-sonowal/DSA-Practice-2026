#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    v.reserve(200);

    cout<<v.capacity()<<endl;
    return 0;
}