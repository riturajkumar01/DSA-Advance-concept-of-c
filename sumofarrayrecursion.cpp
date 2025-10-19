#include<iostream>
using namespace std;
int sumofarray(int arr[] , int n){
    // base case
    if(n==0){
        return 0;
    }
    return arr[0] + sumofarray(arr+1 , n-1);
}
int main(){
    int arr[] = { 1, 2 ,3  ,4 ,5};
    int n = sizeof(arr) / sizeof(arr[0]);  // determining the size of array 

    cout << "Array. of the size is : ";
   for(int i =0; i<n; i++){
    cout<<arr[i]<<" ";
   }
    cout << endl;
    
    int result = sumofarray(arr , n);
    cout<<" sum of array using " << n << " elements is : " << result << endl;
    
    return 0;
}