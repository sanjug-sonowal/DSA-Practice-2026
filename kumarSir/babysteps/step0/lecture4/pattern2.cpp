#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        int spaces = n - i + 1;

        //spaces printing
        for(int j = 1; j <= spaces; j++){
            cout<<" ";
        }

        //star printing
        for(int k = 1; k <= i; k++){
            cout<<"*";
        }

        cout<<endl;
    }
    return 0;
}