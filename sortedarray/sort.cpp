#include<iostream>
using namespace std;
bool issorted(int  *arr , int size){
    if(size == 0 || size == 1){
    return true;
    }

    if(arr[0] > arr[1])
    return false;
    else{
        bool remaining = issorted(arr+1 , size-1);
        return remaining;
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    bool  ans = issorted(arr , size);
    if(ans){
        cout<<"Arrays are sorted"<<endl;
    }
   
    return 0;
}
