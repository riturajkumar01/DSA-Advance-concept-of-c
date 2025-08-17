#include<iostream>
#include<algorithm>
using namespace std;
void reversestring(string &s){
    int i =0, j = s.size()-1;
    while(i<j){
        swap(s[i++] , s[j--]);
    }
}
int main(){
    string s;
    cout<<"Enter a string : ";
    getline(cin, s);
    reversestring(s);
    cout<<"Reversed string: "<<s<<endl;
    return 0;
}