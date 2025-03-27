#include<iostream>
#include<queue>
using namespace std;
int main(){
    //create a queue 
    queue<int>q;
    q.push(12);
    q.push(11);
    cout<<"front is "<<q.front()<<endl;
    q.push(10);
    cout<< "size of queue is : "<< q.size() <<endl;
    q.pop();
    cout<< "size of queue is : "<< q.size() <<endl;
    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }

    return 0;
}