// Q2.Print the following pattern for the given number of rows.
// Pattern for N = 5
// E
// D E
// C D E
// B C D E
// A B C D E

#include<iostream>
using namespace std;

int main(){
    int n = 5;

    char ch = 65;
    for(int i = 1; i <= n; i++){
        for(int j = 'A' + (n - i); j <= 'A' + n - 1; j++){
            char ch = j;
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}