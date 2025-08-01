#include<iostream>
using namespace std;
void removespecialchar(string &s){
    for(int i = 0; i<s.size(); i++){
        if(s[i]<'A' || (s[i]>'Z' && s[i]<'a') || s[i]>'z'){
            s.erase(i,1);
            i--;
        }
    }
    cout<<"string after removing special characters : "<<s<<endl;
}
int main(){
    cout<<"enter a string : ";
    string s;
    getline(cin,s);
    removespecialchar(s);
}