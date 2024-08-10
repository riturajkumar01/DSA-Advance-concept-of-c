#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        for(int j = 0; j < n-i; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[]={2,4,5,7,8,9,10,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    cout<<"Sorting Element : \n ";
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;


}
