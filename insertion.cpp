#include<iostream>
using namespace std;
void insertionsort(int arr[] , int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--){
            if(arr[j]> temp){
                arr[j+1] = arr[j];
            }
        }
        arr[j+1] = temp;
    }
}
int main(){
    int n;
    int arr[100];
    cout << " Enter the number of elements : ";
    cin>>n;
    cout<<"enter the elements: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
   insertionsort(arr,n);
    cout << "Bubble sorted Array: ";
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}