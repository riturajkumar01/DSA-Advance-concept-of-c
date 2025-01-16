#include<iostream>
using namespace std;

class Employee {
public:
    int id;
    string name;
    float salary;

    Employee(int i, string n, float s) {
        id = i;
        name = n;
        salary = s;
    }

    void display() {
        cout << id << " " << name << " " << salary << endl;
    }
};

int main(void) {
    Employee E1 = Employee(123, "RAJ", 89000);
    Employee E2 = Employee(134, "Diya", 50000);
    E1.display();
    E2.display();
    return 0;
}