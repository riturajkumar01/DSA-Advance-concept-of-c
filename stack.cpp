#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("ritu");
    s.push("raj");
    s.push("kumar");
    cout<<"top element--> "<<s.top()<<endl;

    s.pop();
       cout<<"top element--> "<<s.top()<<endl;
       cout<<"size of stack --> "<<s.size()<<endl;
       cout<<"empty or not stack  --> "<<s.empty()<<endl;

       ////////////
         s.pop();
       cout<<"top element--> "<<s.top()<<endl;
       cout<<"size of stack --> "<<s.size()<<endl;
       cout<<"empty or not stack  --> "<<s.empty()<<endl;
       
    

}