#include <iostream>

using namespace std;

// sorting
// - log(N) time search: binary search
// quadratic sorting (O(N^2))

//   - bubble sort 
//      worst case:           5 4 3 2 1 and make it to ascending order
//      step 1:               4 5 3 2 1
//      step 2:               4 3 5 2 1
//      step 3:               4 3 2 5 1
//      step 4:               4 3 2 1|5
//      step 5:               3 4 2 1|5
//          .
//          .
//          .
//      step (N*(N+1))/2:     1 2 3 4 5            |    (N*(N+1))/2 == O((N^2)/2+N/2) => O(N^2+N) => O(N^2)
//   - bubble sort optimize
//      using a boolean to stop when don't need to

//  - selection sort
//      worst case:             5 4 3 2 1 and make it to ascending order
//      step 1:                 1 4 3 2|5
//      step 2:                 1 2 3|4 5
//      step 3:                 1 2|3 4 5
//      step 4:                 1|2 3 4 5           |   (N*(N+1))/2 == O((N^2)/2+N/2) => O(N^2+N) => O(N^2)

void printArray(int a[], size_t size){
    for(int i = 0; i < size; i++) cout << "a[" << i << "] = " << a[i] <<endl;
}

void swap(int a[], size_t pos1, size_t pos2){
    int temp = a[pos1];
    a[pos1] = a[pos2];
    a[pos2] = temp;
    return;
}

void bubbleSort(int a[], size_t size){
    bool swapped;
    for(size_t i = size-1; i >0; i--){
        swapped = false;
        for(size_t j = 0; j < i; j++){
            if(a[j] > a[j+1]) {
                swap(a, j, j+1);
                swapped=true;
            }
        }
        if(!swapped){
            cout << "i = " << (size-i-1) <<endl;
            cout << "already in order"<<endl;
            return;
        }
    }
}

void selectionSort(int a[], size_t size){
    int largestIndex, largest;
    for(size_t i = size - 1; i > 0; i--){
        largestIndex = 0;
        largest = a[largestIndex];
        for(size_t j = 0; j <= i; j++){
            if(a[j] > largest) {
                largestIndex = j;
                largest=a[largestIndex];
            }
        }
        swap(a, i, largestIndex);
    }
}

void bubble(){
    int a[] = {5, 4, 3, 2, 1};
    int b[] = {1, 2, 3, 4, 5};
    int c[] = {2, 5, 10, 123402304, 7, 3, 4};

    bubbleSort(a, 5);
    bubbleSort(b, 5);
    bubbleSort(c, 7);

    cout << "\t--------array: a--------" <<endl;
    printArray(a, 5);
    cout << "\t--------array: b--------" <<endl;
    printArray(b, 5);
    cout << "\t--------array: c--------" <<endl;
    printArray(c, 7);
}

void selection(){
    int a[] = {5, 4, 3, 2, 1};
    int b[] = {1, 2, 3, 4, 5};
    int c[] = {2, 5, 10, 123402304, 7, 3, 4};

    selectionSort(a, 5);
    selectionSort(b, 5);
    selectionSort(c, 7);

    cout << "\t--------array: a--------" <<endl;
    printArray(a, 5);
    cout << "\t--------array: b--------" <<endl;
    printArray(b, 5);
    cout << "\t--------array: c--------" <<endl;
    printArray(c, 7);
}

int main(){
    cout << "\t\t--------------------------------BUBBLE SORT-------------------------------------" <<endl;
    bubble();
    cout << "\t\t---------------------------------SELECTION SORT------------------------------------" <<endl;
    selection();
    return 0;
}