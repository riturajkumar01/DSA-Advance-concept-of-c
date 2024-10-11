#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main (){
    vector<int> v;
    v.push_back(1);
        v.push_back(3);
            v.push_back(6);
                v.push_back(7);
                cout<<"finding binary number of element in 6--> "<<binary_search(v.begin(),v.end(),6);
                cout<<"lower bond-->  "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
                cout<<"upper bond-->  "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
int a= 3;
int b= 5;
cout<<"max--> "<<max(a,b);
cout<<endl;
cout<<"min--> "<<min (a,b);
cout<<endl;
swap(a,b);
cout<<"swap the element--> "<<a<<endl;
cout<<endl;
string abcd = "abcd";
reverse(abcd.begin(),abcd.end());
cout<< "string---> "<<abcd<<endl;



}