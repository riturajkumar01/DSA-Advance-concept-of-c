#include<iostream>
using namespace std;
class Hero{
    private:
    int health;
    public:
    char*name;
    char level;
    static int timetocomplete;
    Hero(){
        cout<<"Simple constructor called"<<endl;
        name = new char[100];
    }
    //parameterised constructor
    Hero (int health){
        this->health = health;
    }
    Hero(int health , char level){
        this->health = health;
        this->level = level;
    }
    void print(){
        cout<<endl;
        cout<<" [ Name: "<< this->name<<" , "<<endl;
        cout<<" health : "<< this->health<<" ,";
        cout<<" level : "<< this->level <<" ] ";
        cout<<endl;
    }
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void sethealth(int h){
        health = h;
    }
    void setlevel(char ch ){
        level = ch;
    }
    void setName(char name[] ){
        strcpy(this->name , name);
    }
};
int Hero::timetocomplete = 5;
int main(){
    cout<<Hero::timetocomplete<<endl;
}
