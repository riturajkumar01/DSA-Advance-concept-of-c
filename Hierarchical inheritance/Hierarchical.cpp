#include<iostream>
using namespace std;
// Hierarchical inheritance
class A{
    public:
    void func1(){
        cout<<"inside function 1 "<<endl;
    }
};
class B : public A{
    public:
    void func2(){
        cout << "inside function 2 "<<endl;
    }
};
class C :public A{
    public:
    void func3(){
        cout<<"inside function 3 "<<endl;
    }
};
int main(){
    A object;
    object.func1();

    B object2;
    object2.func2();

    C object3;
    object3.func1();

}