#include<iostream>
using namespace std;
int main(){
    int a ,b;
    char op;
    cout<<" enter first. numer : ";
    cin>>a;
     cout<<"enter the operation (+,-,*,/): ";
     cin>>op;
    cout<<"enter second. number : ";
    cin>>b;
    switch(op){
        case '+':
        cout<<a<<" + "<<b<<" = "<<a+b<<endl;
        break;
        case'-':
        cout << a << " - " << b << " = " << a - b << endl;
         break;
         case'*':
         cout<<a<<"*"<<b<<" = " << a*b <<endl;
         break;
         case'/':
         if(b!=0)
         cout<<a<<"/"<<b<<"="<<a/b<<endl;
         else
         cout<<" error division by zero is not allowed";
         break;
         default:
         cout<<"invalid operator"<<endl;
    }
}