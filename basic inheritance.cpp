#include<iostream>
#include<string>

using namespace std;
class person{
    public:
    string name;
    int age;

    person(string name , int age){
        this->name = name;
        this-> age = age;
    }

    person(){
        cout<<"Parent constructor\n";
    }
    ~person(){
        cout<<"Parent destructor\n";
    }
};
class student : public person{
    public:
    int rollno;
    student(string name , int age , int rollno) : person(name , age){
        this->rollno = rollno;
        cout<<"Child constructor\n";
    }
    ~student(){
        cout<<"Child destructor\n";
    }
    void getinfo(){
        cout<<" name:- "<<name<<endl;
        cout<<" age :-"<<age<<endl;
        cout<<" rollno:- "<<rollno<<endl;
    }
};
int main(){
    {
        student s1(" raj kumar thakur " , 22 , 1234);
        s1.getinfo();
    }


    cout<<"Back in main after object destruction\n";
}





























