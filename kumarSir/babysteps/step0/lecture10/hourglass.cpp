#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    // part 1
    for(int i = 1; i <= n; i++){
        //spaces
        for(int j = 1; j <= i; j++){
            cout<<" ";
        }

        //stars
        for(int j = 1; j <= n - i + 1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //part 2
    for(int i = 2; i <= n; i++){
        //spaces
        for(int j = 1; j <= n - i; j++){
            cout<<" ";
        }

        //stars
        for(int j = 1; j <= i; j++){
            cout<<" *";
        } 
        cout<<endl;
    }
    return 0;
}