#include<iostream>
using namespace std;

class heap {
public:
    int arr[100];
    int size;
    
    heap() {
        arr[0] = -1;  // Not used in 1-indexed heap
        size = 0;
    }
    
    void insert(int val) {
        size = size + 1;
        int index = size;
        arr[index] = val;
        
        while(index > 1) {
            int parent = index/2;
            if(arr[parent] < arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else {
                break;  // FIX: Add break to prevent infinite loop
            }
        }
    }
    
    void print() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
    void deletefromheap() {
        if(size == 0) {
            cout << "Nothing to delete" << endl;
            return;
        }
        
        // FIX: Replace root (index 1) with last element
        arr[1] = arr[size];
        size--;
        
        int i = 1;
        
        // Heapify-down process
        while(i <= size) {
            int left = 2 * i;      // FIX: Correct for 1-indexed heap
            int right = 2 * i + 1; // FIX: Correct for 1-indexed heap
            int largest = i;
            
            if(left <= size && arr[left] > arr[largest]) {
                largest = left;
            }
            
            if(right <= size && arr[right] > arr[largest]) {
                largest = right;
            }
            
            if(largest != i) {
                swap(arr[i], arr[largest]);
                i = largest;
            }
            else {
                break;  // FIX: Exit when heap property is satisfied
            }
        }
    }
};

// This heapify function is fine
void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i;      // For 1-indexed heap
    int right = 2 * i + 1;
    
    if (left <= n && arr[left] < arr[largest]) {
        largest = left;
    }
    
    if (right <= n && arr[right] < arr[largest]) {
        largest = right;
    }
    
    if (largest != i) {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

// This heapsort function is fine
void heapsort(int arr[], int n) {
    int t = n;
    while(t > 1) {
        swap(arr[t], arr[1]);
        t--;
        heapify(arr, t, 1);
    }
}

int main() {
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(38);
    h.insert(68);
    h.insert(59);
    h.insert(77);
    h.insert(88);
    h.insert(89);
    
    cout << "Max Heap: ";
    h.print();
    
    h.deletefromheap();
    cout << "After deletion: ";
    h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    
    // Build heap
    for(int i = n/2; i > 0; i--) {
        heapify(arr, n, i);
    } 
    
    cout << "After heapify: ";
    for(int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    } 
    cout << endl;

    // Sort the array
    heapsort(arr, n);
    
    cout << "Sorted array: ";
    for(int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    } 
    cout << endl;
   
    return 0;
}
// Time complexity: O(n log n) for heapsort
// O(log n) for insert and delete operations