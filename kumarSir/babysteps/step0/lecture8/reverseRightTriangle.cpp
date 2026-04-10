#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        int spaces = n - i;
        for(int j = 1; j <= spaces; j++){
            cout<<" ";
        }

        for(int j = n - i; j < n; j++){
            char ch = 'A' + j;
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}