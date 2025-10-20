#include<iostream>
using namespace std;
// using recusrsion find the binary search 
int binarysearch(int arr[] , int s , int e , int key){
    // base case
    if(s<=e){
        int mid = s + (e-s)/2; // to avoid overflow
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            return binarysearch(arr, mid+1 , e , key);
        }
        else{
            return binarysearch(arr , s , mid-1 , key);
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<" enter the numberof elments : ";
    cin>>n;
    int arr[n];
    cout<<" enter the elements of array : ";
    for(int i =0; i<n; i++){
        cin>>arr[i]; // input array elements 
    }
    int key;
    cout<<" enter the element to be searched : ";
    cin>>key;
    cout<<" the element is found at index : " << binarysearch(arr , 0 , n-1 , key) <<endl;
}