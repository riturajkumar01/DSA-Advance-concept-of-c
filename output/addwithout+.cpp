#include<iostream>
using namespace std;
int add(int a , int b){
    while(b!=0){
        int carry = a & b;
        a = a ^ b;
        b = carry << 1; // shift carry to left by 1
    }
    return a; // return sum
}
int main(){
    int a = 5 , b =3;
    int sum = add(a,b);
    cout<<" sum is : "<< a <<" + "<< b <<" = "<< sum << endl;
    return 0;
}