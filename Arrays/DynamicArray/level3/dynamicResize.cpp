#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int *arr2 = new int[n];

    for(int i = 0; i < n; i++){
        arr2[i] = arr[i];
    }

    arr2[3] = 4;
    arr2[4] = 5;

    delete[] arr;

    for(int i = 0; i < n + 2; i++){
        cout<<arr2[i]<<" ";
    }

    delete[] arr2;

    return 0;
}