#include<iostream>
using namespace std;

int main(){
    int arr[5] = {20,20,10,30,50};

    cout<<sizeof(arr)/sizeof(arr[0])<<endl;
    return 0;
}