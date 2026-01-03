#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3 };
    int ans , mx =0;
    unordered_map<int, int> mp;
    for(int x : arr) mp[x]++;
    for(auto it :mp){
        if(it.second > mx){
            mx = it.second; // value update
            ans = it.first; // key update
        }
    }
    cout<<" Most frequent element is "<<ans<<" with frequency "<<mx<<endl;
    return 0;
}
