// 1.create  the given pattern 
// 000000
// 000000
// 000000
// 000000


#include<iostream>
using namespace std;

int main(){
    int n = 4;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 6; j++){
            cout<<"0";
        }
        cout<<endl;
    }
    return 0;
}