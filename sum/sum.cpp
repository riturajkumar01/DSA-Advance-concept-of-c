#include<iostream>
using namespace std;
int getsum(int *arr,int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int remaing =  getsum(arr+1,size-1);
    int sum = arr[0]+ remaing;
    return sum;

}
    int main(){
    int arr[5]={3,6,9,10,18};
    int size = 5;
    int sum = getsum(arr,size);

    cout<<"sum :- "<<sum<<endl;

    return 0;
}