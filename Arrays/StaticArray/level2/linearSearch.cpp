#include<iostream>
using namespace std;

int main(){
    int arr[5] = {20,43,4,5};
    int x = 3;
    int flag = false;

    for(int i = 0; i < 5; i++){
        if(arr[i] == x){
            flag = true;
        }
    }
    if(flag){
        cout<<"Element Found"<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}