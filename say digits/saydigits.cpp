#include<iostream>
using namespace std;
void saydigit (int n , string arr[]){
    if(n==0)
    return ;

    int digit = n % 10;
    n = n / 10;
    saydigit(n,arr);
    cout<< arr[digit]<<" ";

}
int main(){
    string arr[10] = {"zero " , "one" , "two" , "three" , "four"  , "five"  , "six" , "seven" , "eight"  , "nine" };
    cout<<"enter your number : -  "<<endl;
    int n ;
    cin>>n;
    cout<<endl;
    saydigit(n,arr);
    cout<<endl<<endl<<endl;
    return 0;

}