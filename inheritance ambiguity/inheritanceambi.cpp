#include<iostream>
using namespace std;
// inheritance ambiguity
class A {
    public:
    void func(){
        cout<<"i am A "<<endl;
    }
};
class B {
    public:
    void func(){
        cout<<"i am B " <<endl;

    }
};
class C : public A, public B{

};
int main() {
    // by using ambiguity we use scope
    C obj;

    obj.A::func();
    obj.B::func();

    return 0;
}