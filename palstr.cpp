#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool ispalindromecheck(string s){
    int left =0 , right = s.size()-1;
    while(left < right){
    if(s[left]!= s[right]){
        return false;
    }
    left++;
    right--;
}
return true;
}
int main(){
    string s;
    cout<<" Enter a string : ";
    getline(cin , s);
    if(ispalindromecheck(s)){
        cout<<" The string is a palindrome "<<endl;
    }
    else{
        cout<<" The string is not a palindrome "<<endl;
    }
    return 0;
}