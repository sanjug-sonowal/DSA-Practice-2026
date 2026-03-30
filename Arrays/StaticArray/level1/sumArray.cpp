#include<iostream>
using namespace std;

int main(){
    int arr[5] = {30,40,20};
    int sum = 0;
    for(int i = 0; i < 5; i++){
        sum += arr[i];
    }

    cout<<sum;
    return 0;
}