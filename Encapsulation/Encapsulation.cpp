#include<iostream>
using namespace std;
class student {
    private:
    string studentname;
    int studentrollno;
    int studentage;
    public:
    string getstudentname(){
        return studentname;
    }
    void setstudentname(string studentname){
        this-> studentname = studentname;
    }
    int getstudentrollno(){
        return studentrollno;
    }
    void setstudentrollno(int studentrollno){
        this->studentrollno = studentrollno;
    }
    int getstudentage(){
        return studentage;
    }
    void setstudentage(int studentage){
                //pointers
        this->studentage = studentage;
    }
};
int main(){
    student obj;
    obj.setstudentname("Rituraj");
    obj.setstudentrollno(20);
    obj.setstudentage(20);
    cout<< "Student Name : " <<obj.getstudentname()<<endl;
    cout<<"Student Roll NO : "<< obj.getstudentrollno()<<endl;
    cout<< "Student Age : " << obj.getstudentage()<<endl;
    return 0;

}