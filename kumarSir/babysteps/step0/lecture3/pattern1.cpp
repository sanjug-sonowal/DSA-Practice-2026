// Print the following pattern for the given N number of rows.
// Pattern for N = 4
// A
// B C
// C D E
// D E F G


#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char ch = 65;

    for(int i = 0; i < n; i++){
        ch = 'A' + i;
        for(int j = 0; j <= i; j++){
            cout<<ch++;
        }
        cout<<endl;
    }
    return 0;
}