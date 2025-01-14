#include<iostream>
using namespace std;


class hero{

    public:
    int health;
    char level;
};

 int main() {
    //creation of object
    hero rituraj;
    rituraj.health = 70;
    rituraj.level = 'A';
    cout<<"health is:- "<< rituraj.health << endl;
    cout<<"level  is:-  "<< rituraj.level << endl;

    return 0;
}