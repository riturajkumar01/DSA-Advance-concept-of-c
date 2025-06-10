#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> m;
    // INSERTION
    // method 1
    pair<string,int> p = make_pair("rituraj" , 3);
    m.insert(p);
    //method 2
    pair<string,int> p2("smita" ,2 );
    m.insert(p2);
    //method 3
    m["notation"] = 1;
    // what will happen if we insert the same key again?
    m["notation"] = 5;
    // it will update the value of the key
    // search
    cout<< m["rituraj"]<<endl;
    cout<< m.at("smita")<<endl;
    cout<< m["notation"]<<endl;
    cout<< m["unknownkey"]<<endl;  // Creates new key with value 0
    cout<< m.at("unkonownkey")<<endl;  // Will throw std::out_of_range exception
    //size
    cout<<"size : "<<m.size()<<endl;
    //check presence
    cout<< m.count("rituraj")<<endl;
    // erase
    m.erase("rituraj");  // Trying to erase a key that doesn't match " rituraj"
    //after erasing
     cout<<m.size()<<endl;
     //iterators
     unordered_map<string,int>::iterator it = m.begin();
     while(it !=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
     }

}