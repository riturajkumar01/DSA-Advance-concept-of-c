#include<iostream>
using namespace std;
class teacher{
    private: 
    double salary;
    public:
    //non parametrized
   /*teacher(){
    dept = " Computer Science ";
}*/
   // parametrized 
    teacher(string n , string d , string s , double sal){
    name = n;
    dept = d;
    subject = s;
    salary = sal;

   }
   // deep copy constructor 
   teacher(const teacher &orgobj){ // const reference ensures we don't modify original
    cout<< " I am a deep copy constructor \n";
    // Deep copy: each member is independently copied
    // strings are deep-copied automatically in C++
    this->name = orgobj.name;      // independent string copy
    this->dept = orgobj.dept;      // independent string copy
    this->subject = orgobj.subject; // independent string copy
    this->salary = orgobj.salary;  // primitive type copy
   }
    //properties // attributes

    string name;
    string dept;
    string subject;
   // double salary;
    // methods // member function
    void changeDept(string newDept){
        dept = newDept;
    }
    // setter 
    void setsalary(double s){
        salary = s;
    }

    // getter
    double getsalary(){
        return salary;

    }
    void getinfo(){
        cout<< " name " << name << endl;
        cout << " dept "<< dept << endl;
    }
    
};
int main(){
    teacher t1("raj ", " CSE", " AMC" , 25000); //constructor call 
    teacher t2(t1); 
    t1.getinfo(); // deep copy - t2 is independent from t1
    
    cout << "\n--- After modifying t2 ---" << endl;
    // deep copy: changes to t2 do NOT affect t1
    t2.name = " khiladi";
    t2.changeDept(" ECE");
    t2.setsalary(35000);
    t2.getinfo();
    
    return 0;

}