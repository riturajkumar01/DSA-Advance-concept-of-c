#include<iostream>
#include<array>
using namespace std;
int main (){
    int basic [5]={1,2,3};
    array<int,4> a = {1 , 2 , 3 , 4 };
    int size = a.size();
    for(int  i = 0 ; i < size ; i++){
        cout<<a[i]<<endl;
    }
    cout<<"ELEMENT AT 2 INDEX : "<<a.at(2)<<endl;
    cout<<"EMPTY OR NOT : "<<a.empty()<<endl;
    cout<<"FIRST ELEMENT : "<<a.front()<<endl;
    cout<<"LAST ELEMENT : "<<a.back()<<endl;
}