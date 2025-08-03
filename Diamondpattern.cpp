#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter the number : "<<endl;
    cin>>n;
    for(int i = 1 ; i<=n; i++){// for each row 4 
        for(int j= i; j<n; j++) cout<<" "; // for space 4-3 = 1
        for(int j = 1; j<=(2*i-1); j++) cout<<"*"; // for star 1,3,5,7
        cout<<endl;
    }
    for(int i =n-1; i>=1; i--){// for each row lower. part  3 2 1 
        for(int j = n; j>i; j--) cout<<" ";///sirf 3 hain simey tho calculate hoga 2*3-1
        for(int j = 1; j<=(2*i-1); j++) cout<<"*";
        cout<<endl;
    }
}