#include <iostream>

using namespace std;

// Merge Sort
void merge(int a[], size_t leftArraySize, size_t rightArraySize){
    // Note: assuming left and right sub arrays are sorted
    int* tmpArr;    // tmp array to hold sorted elements
    size_t copied = 0;         // num elements copied to tempArray
    size_t left_copied = 0;    // num elements copied to left Array
    size_t right_copied = 0;   // num elements copied to right Array
    
    // create tmp arr
    tmpArr = new int[leftArraySize + rightArraySize];

    // merge left and right array in sorted order
    while((left_copied < leftArraySize) && (right_copied < rightArraySize)){ //保证抄入的东西小于size
        if(a[left_copied] < (a+leftArraySize)[right_copied]){
            // a+leftArraysize = right array start
            tmpArr[copied++] = a[left_copied++];   // copied and then ++
        }else{
            // right array is less
            tmpArr[copied++] = (a + leftArraySize)[right_copied++];
        }
    }
    // copy the leftover
    // if left is leftover
    while(left_copied < leftArraySize){
        tmpArr[copied++] = a[left_copied++];
    }
    // if right is leftover
    while(right_copied < rightArraySize){
        tmpArr[copied++] = (a+leftArraySize) [right_copied++];
    }
    
    // replace the sorted value into the original array
    // here is where O(N)
    for(size_t i = 0; i < leftArraySize+rightArraySize; i++){
        a[i] = tmpArr[i];
    }
    // free up the memory
    delete[] tmpArr;
}

void mergesort(int a[], size_t size){
    // int has specific bound space
    // size_t safes more memory
    size_t leftArraySize, rightArraySize;

    // split into different boxes
    if(size > 1){
        leftArraySize = size/2;
        rightArraySize = size - leftArraySize;
        // call mergeSort on left array
        mergesort(a, leftArraySize);
        // call mergeSort on right array
        mergesort((a+leftArraySize), rightArraySize);
        // merge left and right
        merge(a, leftArraySize, rightArraySize);
    }
}
// End Merge Sort

void printArr(const int a[], size_t size){
    cout << "Print Arr" << endl;
    for(size_t i = 0; i < size; i++) cout << a[i] << " "; 
    cout <<endl;
}

void testMergeSort(){
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int c[] = {2, 3, 4, 123, 4, 6, 1, 51, 235, 9};
    cout << "--------------------------------unsorted Array---------------------------" <<endl;
    printArr(a, 10);
    printArr(b, 10);
    printArr(c, 10);
    cout << "--------------------------------sorted Array-----------------------------" <<endl;
    mergesort(a, 10);
    mergesort(b, 10);
    mergesort(c, 10);
    printArr(a, 10);
    printArr(b, 10);
    printArr(c, 10);
}

void partition(int a[], size_t size, size_t& pivotIndex){
    int pivot = a[0];        // choose 1st value for pivot
    size_t left = 1;         // index just right of pivot
    size_t right = size - 1; //last items in array
    int tmp;

    while(left <= right){
        // increment left if <= pivot
        while(left < size && a[left] <= pivot) left++;
        // decrement right if > pivot
        while(a[right] > pivot) right--;
        if(left < right){
            tmp = a[left];
            a[left] = a[right];
            a[right] = tmp;
        }
    }

    // swap pivot with a[right]
    pivotIndex = right;
    tmp = a[0];
    a[0] = a[pivotIndex];
    a[pivotIndex] = tmp;

}

void quickSort(int a[], size_t size){
    size_t pivotIndex;           // index of pivot
    size_t leftSize;        // num elements left of pivot
    size_t rightSize;       // num elements right of pivot

    if(size > 1){
        // partition a[] based on pivotIndex
        partition(a, size, pivotIndex);
        leftSize = pivotIndex;
        rightSize = size - leftSize - 1;

        // recursive call sorting the left array
        quickSort(a, leftSize);

        // recursive call sorting the right array
        quickSort((a+leftSize+1), rightSize);
    }

}

void testQuickSort(){
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int c[] = {2, 3, 4, 123, 4, 6, 1, 51, 235, 9};
    cout << "--------------------------------unsorted Array---------------------------" <<endl;
    printArr(a, 10);
    printArr(b, 10);
    printArr(c, 10);
    cout << "--------------------------------sorted Array-----------------------------" <<endl;
    quickSort(a, 10);
    quickSort(b, 10);
    quickSort(c, 10);
    printArr(a, 10);
    printArr(b, 10);
    printArr(c, 10);
}


int main(){
    testQuickSort();
    
    return 0;
}