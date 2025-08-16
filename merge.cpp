#include<iostream>
using namespace std;
void merge(int arr[] , int left , int mid , int right){

    int n1 = mid - left+1;
    int n2 = right - mid;

    int leftArr[n1], rightArr[n2];

    for(int i =0; i<n1; i++)
        leftArr[i] = arr[left+i];// Copy elements to left subarray
        for (int j =0; j<=n2; j++)
            rightArr[j] = arr[mid+1+j];

            int i =0; int j = 0; int k = left;

            while(i<n1 && j<n2){
                if(leftArr[i] <= rightArr[j]){
                    arr[k] = leftArr[i];
                    i++;
                    //k++;
                }else{
                    arr[k] = rightArr[j];
                    j++;
                   // k++;
                }
                k++;
            }
            while(i<n1){
                arr[k] = leftArr[i];
                i++;
                k++;
            }
            while(j<n2){
                arr[k] = rightArr[j];
                j++;
                k++;
            }
        }
        void mergesort(int arr[] , int left , int right){
            if(left < right){
                int mid = left+(right-left) /2;
                mergesort(arr, left,mid);
                mergesort(arr, mid+1, right);
                merge(arr,left,mid,right);
            }
        }
        int main(){
            int n;
            int arr[100];
            cout << "Enter the number of elements: ";
            cin >> n;
            cout << "Enter the elements: ";
            for(int i =0; i<n; i++){
                cin >> arr[i];
        }
        mergesort(arr, 0,n-1);
        cout << "Sorted Array: ";
        for(int i =0; i<n; i++){
            cout << arr[i] << " ";
    }
    cout<<endl;
}