#include<iostream>
using namespace std;

int main(){
    int arr[5] = {3,4,5,6,7};
    int arrb[5] = {};

    for(int i = 0; i < 5; i++){
        arrb[i] = arr[i];
    }

    for(int i = 0; i < 5; i++){
        cout<<arrb[i]<<" ";
    }
    return 0;
}