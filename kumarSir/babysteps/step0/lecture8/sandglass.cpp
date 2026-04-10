#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int mid = (n + 1) / 2;

    for(int i = 1; i <= mid; i++){
        int spaces = i - 1;
        for(int j = 1; j <= spaces; j++){
            cout<<" ";
        }

        for(int j = i; j <= n - i + 1; j++){
            cout<<j;
        }

        cout<<endl;
    }

    for(int i = mid - 1; i >= 1; i--){
        int spaces = i - 1;
        for(int j = 1; j <= spaces; j++){
            cout<<" ";
        }

        for(int j = i; j <= n - i + 1; j++){
            cout<<j;
        }

        cout<<endl;
    }
    return 0;
}