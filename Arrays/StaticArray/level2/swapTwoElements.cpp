#include<iostream>
using namespace std;

// task is to swap index 1 and index 3

int main(){
    int arr[5] = {3,4,5,6,67};
    arr[1] = arr[1] ^ arr[3];
    arr[3] = arr[1] ^ arr[3];
    arr[1] = arr[1] ^ arr[3];

    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}