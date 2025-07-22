#include<iostream>
using namespace std;
class A{
    int a;
    static int b;
    public:
    A(int x , int y){
        a = x;
        b = y;
    }
    void display(){
        cout<<a<<" "<<b<<endl;
    }
    static void disp(){
        cout<<"static function called " << b << endl;
    }
};
    int A::b = 0; //static member initilization
    int main(){
        A obj1(10,20) , obj2(30,40);
        obj1.display();
        obj2.display();
        A::disp();
    }
