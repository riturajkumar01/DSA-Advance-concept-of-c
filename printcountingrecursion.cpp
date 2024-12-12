#include<iostream>
using namespace std;
// taking void func ( Tail recursion)
void print(int n){
  // input n 
  if(n==0){
    return;
  }
  //cout
  cout<<n<<endl;
  //recursive relation 
  print(n-1);
}

int main(){
  int n ; 
  cin>>n;
  print (n);
  return 0;
}







