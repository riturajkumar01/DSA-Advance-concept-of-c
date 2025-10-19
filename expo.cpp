#include<iostream>
using namespace std;
int exp(int n){
    if(n==0)
    return 1;
 int ans = exp(n/2);
 if(n&1){
 return 2*ans*ans;
 }
 else{
    return ans * ans;
}
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"2 raised the power of :-  "<<n<<" is "<<exp(n)<<endl;
    return 0;
}