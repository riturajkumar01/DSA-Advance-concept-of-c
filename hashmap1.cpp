// first non repeating elemnent in an array
#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    int arr[] = { 1, 2 ,1 ,3 ,1, 4, 5,4,6, 3,4 };
    unordered_map<int , int> mp;
    for(int x: arr) mp[x]++;

    for(int x: arr){
        if(mp[x] == 1){ // first non repeating element
            cout<<" First non repeating element is: "<<x;
            break;
        }
    }
}