#include<iostream>
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
                return ;
            }
        }
    }
};
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
}
// time complexity o(logn)