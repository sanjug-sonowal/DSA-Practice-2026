// Print the following pattern for the given N number of rows.
// Pattern for N = 3
// Sample Input 1:
// 3
// Sample Output 1:
//      1 
//     12
//   123

// The dots represent spaces.

#include<iostream>
using namespace std;

int main(){
    int n = 4;

    for(int i = 0; i < n; i++){
        //printing spaces
        int spaces = n - i;
        int stars = n - spaces;
        for(int j = spaces; j <= i; j++){
            cout<<" ";
        }

        //printing numbers
        for(int k = stars; k < n; k++){
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}
