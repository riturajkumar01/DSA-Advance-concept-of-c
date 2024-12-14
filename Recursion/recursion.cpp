#include<iostream>
using namespace std;
void reachHome(int src , int dest){
    cout << " SOURCE : " << src << " DESTINATION : " << dest  << endl ;


    if(src==dest){
        cout<<"THE PERSON REACHED HOME"<<endl;
        return;
    }
    // src++; one more method we can use
    reachHome(src+1 , dest);
}
int main(){
    int src = 1;
    int dest = 10;
    reachHome(src , dest);
    cout<<endl;
    return 0;
}
