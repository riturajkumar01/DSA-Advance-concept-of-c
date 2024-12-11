#include<iostream>
using namespace std;

int factorial(int n ){

    //base case
    if(n == 0)
        return 1;
        int small = factorial(n-1);
        int big = n* small;
        return big;
    }



int main(){
    int n;
    cin>>n;
    int ans = factorial(n);
    cout<< ans << endl;
    return 0;
}








string removeoccurance(string s , string part){
    while(s.length()!=0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
        return s;
    }
}