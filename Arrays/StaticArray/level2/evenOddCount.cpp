#include<iostream>
using namespace std;

int main(){
    int arr[5] = {3,4,5,6,67};
    int evenCount = 0;
    int oddCount = 0;

    for(int i = 0; i < 5; i++){
        if(arr[i] % 2 == 0){
            evenCount++;
        }else{
            oddCount++;
        }
    }

    cout<<evenCount<<" "<<oddCount<<endl;
    return 0;
}