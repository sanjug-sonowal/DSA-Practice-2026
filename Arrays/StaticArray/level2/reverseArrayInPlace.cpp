#include<iostream>
using namespace std;

int main(){
    int arr[5] = {33,4,5,6,7};
    int left = 0;
    int right = 5 - 1;
    while(left < right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }

    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}