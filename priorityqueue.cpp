#include<iostream>
#include<queue>
using  namespace std;
class heap{
    public:
    int arr[100];
    int size;
    heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;
        while(index < 1){
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent] , arr[index]);
                index = parent;
            }
        }
    
    }
    void print(){
        for (int i  = 0 ; i<= size; i++){
            cout<< arr[i] << " ";
        }cout << endl;
    }
    void deletefromheap(){
        if(size==0){
            cout<<"Nothing to delete"<< endl;
            return;
        }
        arr[0] = arr[size];
        size--;
        int i = 1;
        int left = 2 * i +1;
        int right = 2 *i +2;
        while(i < size){
            if(left < size && arr[i] < arr[left]){
                swap(arr[i], arr[left]);
                i = left;
            }
            else if(right < size && arr[i] < arr[right]){
                swap(arr[i], arr[right]);
                i = right;
            }
            else{
                return;
            }
        }
    }
};
  void heapify(int arr[] , int n , int i) {
    int largest = i;
    int left = 2 * i +1;     // For 1-indexed heap
    int right = 2 * i + 2;
    
    // Find the largest among current node and its children
    if (left <n && arr[left] > arr[largest]) {
        largest = left;
    }
    
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }
    
    // If largest is not the current node, swap and continue heapifying
    if (largest != i) {
        swap(arr[largest], arr[i]);
        heapify(arr , n ,largest);
    }
 }
int main(){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(38);
    h.insert(68);
    h.insert(59);
    h.insert(77);
    h.insert(88);
    h.insert(89);
    h.print();
    h.deletefromheap();
    h.print();

    int arr[6] = {-1, 54 , 53, 55, 52, 50};
    int n = 5;
    for(int i = n/2; i>0 ; i--){
    heapify(arr , n , i);
    } 
    cout<<"printing the heapify" << endl;
    for(int i = 1 ; i<n; i++){
        cout << arr[i]  <<" ";
    } cout << endl;

    // max heap
    priority_queue<int> pq;
    pq.push(12);
    pq.push(22);
    pq.push(24);
    pq.push(33);
    cout<<"Maximum element in the prority queue: "<<pq.top() << endl;
     cout<<"size: "<<pq.size() << endl;
     // min heap
     priority_queue<int , vector<int> , greater<int> > minheap;
     minheap.push(12);
     minheap.push(22);
     minheap.push(24);
     minheap.push(33);
     cout<<"Minimum element in the prority queue: "<<minheap.top() << endl;
     cout<<"size: "<<minheap.size() << endl;

}
// time complexity o(logn)