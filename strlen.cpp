#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool isVowels(char ch){
    ch = tolower(ch);
    ch= toupper(ch);
     return ch =='a'|| ch =='e'|| ch =='i'||
     ch =='o'|| ch =='u'|| ch =='A'|| ch =='E'|| ch =='I'||ch =='O'|| ch =='U';
}
string remVowel(const string& str){
    string res = str;
    res.erase(remove_if(res.begin(), res.end(), isVowels),res.end());
    return res;
}
int main(){
    cout<<"enter a string : ";
    string str;
    getline(cin,str); // read full line including space also
    cout<<"string without vowels : "<<remVowel(str)<<endl;
    return 0;
}