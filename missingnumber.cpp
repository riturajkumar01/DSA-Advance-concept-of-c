#include<iostream>
using namespace std;
int main(){
    int arr[] = {1 ,2 ,4 ,5 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int total = (n+1)* (n+2)/2;
    int sum =0;
    for(int i=0;i<n; i++){
        sum += arr[i];
    }
    int missingnumber = total - sum;
    cout<<" missing number is : "<<missingnumber<<endl;
}