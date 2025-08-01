#include<iostream>
#include<cmath>
using namespace std;
bool isArmstrong(int n){
    int sum = 0,temp = n , digit =0;
    while(temp>0){
        temp /= 10;
        digit++;
    }
    while(temp>0){
        sum += pow(temp%10 , digit);
        temp /=10;
    }
    return sum == n;
}
int main(){
    int n;
    cin>>n;
    if(isArmstrong(n)){
        cout<<" is an armstrong number"<<endl;
    }
    else{
        cout<<" is Not a armstrong number"<<endl;
    }
}