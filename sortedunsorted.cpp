// check the value is sorted or unsorted 
#include<iostream>
#include<vector>
using namespace std;
bool checksorted(vector<int> arr, int index){
    // base case
    if(index>= arr.size()){
        return true;
    }
    if(arr[index] < arr[index-1]){
        return false;
    }
    return checksorted(arr,index+1);

}
int main(){
    int n;
    cout<<"enter the number of elements : ";
    cin>>n ;
    vector<int> arr(n);
    cout<<" enter the elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool ans = checksorted(arr,1);
    
    if(ans) {
        cout << "Array is sorted!" << endl;
    } else {
        cout << "Array is not sorted!" << endl;
    }
    
    return 0;
}