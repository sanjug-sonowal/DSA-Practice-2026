#include<iostream>
using namespace std;

int main(){
    int arr[5] = {3,5,6,6,77};
    int min = INT_MAX;
    for(int i = 0; i < 5; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    cout<<min;
    return 0;
}