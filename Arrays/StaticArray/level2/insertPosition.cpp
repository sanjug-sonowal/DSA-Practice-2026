#include<iostream>
using namespace std;

int main(){
    int arr[6] = {3,4,5,6,7};
    int pos = 2;
    int value = 25;

    for(int i = 5; i >= pos; i--){
        arr[i + 1] = arr[i];
    }

    arr[pos] = value;

    for(int i = 0; i < 6; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}