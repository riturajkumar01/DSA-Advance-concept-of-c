// User function Template for C++
#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
  
  void heapify(vector<int>&arr , int n , int i){
      int largest = i;
      int left = 2*i+1;
      int right = 2*i+2;
      if(left < n && arr[left] > arr[largest]){
          largest = left;
      }
      if(right < n && arr[right] > arr[largest]){
           largest = right;
      }
      if(largest !=i){
          swap(arr[largest] , arr[i]);
          heapify(arr, n , largest);
      }
  }
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        vector<int> merge = a;
        // merge both of the array
        for(int i = 0 ; i<m ; i++){
            merge.push_back(b[i]);// now Now, you want to add all elements of b into merged.

//So you go through each element b[i] and push it into merged.


        }
        int size = merge.size();
        for(int i = size/2-1; i>=0; i--){
            heapify(merge , size , i); // merge the heap means this the vector containg the element from both of the heap
        }
        return merge;
    }
};