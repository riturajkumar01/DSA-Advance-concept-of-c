#include<iostream>
using namespace std;
void print (int arr[],int s , int e){
    for(int i = s ; i<=e ; i++){
        cout<<arr[i]<< " ";
    }cout<<endl;
}
bool Binarysearch (int *arr , int s , int e , int k){
    print(arr,s,e);
    //base case
    if(s>e)
    return false;

    int mid = s+(e-s)/2;

    if(arr[mid]==k)
        return true;

        if(arr[mid] < k){
            return Binarysearch( arr, mid+1 , e , k);
        }
        else{
            
                return Binarysearch(arr ,  mid-1 ,  s  , k);
            
        }
    

}

int main(){
    int arr[6]= {2,4,6,10,14,18};
    int size = 6;
    int key =  18;
    cout<<"Present or not "<< Binarysearch( arr,0,5,key )<<endl;
}