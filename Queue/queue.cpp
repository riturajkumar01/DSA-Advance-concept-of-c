#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;
    q.push("ritu");
    q.push("raj");
    q.push("kumar");

    ////
    /////
    ////
     cout<<"size before  pop --> "<<q.size()<<endl;
    cout<<"front element --> "<<q.front()<<endl;
    q.pop();
    cout<<"front element --> "<<q.front()<<endl;
    cout<<"size after pop -->"<<q.size()<<endl;
    cout<<" empty or not front element --> "<<q.empty()<<endl;



}