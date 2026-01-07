#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string reversestring(string s){
    reverse(s.begin() , s.end());
    return s;
}
int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    getline(cin, str);
    string reversed = reversestring(str);
    cout<<"Reversed string: "<<reversed<<endl;
    return 0;
}
