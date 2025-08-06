#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cout<<" enter the size of the array : ";
    cin>>n;
    cout<<" Enter "<<n<<" elements: ";
    for(int i = 0 ; i<n; i++){
        cin>>arr[i]; // taking input from the array // index 0 - n -1;
    }
    for(int i = n-1; i>=0; i--){
        cout<<"reversing the array:  "<<arr[i]<<" "<<endl; // printing the array elements in the reverse order 
    }
    return 0;
}