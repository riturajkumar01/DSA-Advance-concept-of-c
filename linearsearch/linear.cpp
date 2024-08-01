#include<iostream>
using namespace std;
bool Search(int arr[] , int size , int key){
    for(int i = 0; i<size ; i++){
        if(arr[i]==key){
            cout << "Index of the key: "<<i << endl;
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10]={1,2,3,-4,5,8,10,9,2,5};
    cout<<"enter the element ";
    int key;
    cin>>key;
    bool found = Search(arr,8, key );
    if(found){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key  is not present "<<endl;
    }
}