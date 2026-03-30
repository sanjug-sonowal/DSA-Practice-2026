#include<iostream>
using namespace std;

int main(){
    int arr[5] = {3,4,3,6,3};
    int target = 3;
    int counter = 0;

    for(int i = 0; i < 5; i++){
        if(arr[i] == 3){
            counter++;
        }
    }
    cout<<counter<<endl;
    return 0;
}