#include <iostream>

using namespace std;

void bubbleSort(int a[], size_t size){
    for(int i = size-1; i > 0; i--){
        for(int j = 0; j < i; j++){
            if(a[j] > a[j+1]){
                int tmp = a[j+1];
                a[j+1] = a[j];
                a[j] = tmp;
            }
        }
    }
}

void insertionSort(int a[], size_t size){
    for(int i = 1; i < size; i++){
        int item = a[i], shiftIndex = i-1;
        while(shiftIndex >= 0 && a[shiftIndex] > item){
            a[shiftIndex+1] = a[shiftIndex];
            shiftIndex--;
        }
        a[shiftIndex+1] = item;
    }
}

void selectionSort(int a[], size_t size){
    for(int i = size-1; i > 0; i--){
        int largestindex = 0;
        int largest = a[largestindex];
        for(int j = 0; j <= i; j++){
            if(a[j] > largest){
                largestindex = j;
                largest = a[j];
            }
        }
        a[largestindex] = a[i];
        a[i] = largest;
    }
}


void printArray(int a[], size_t size){
    for(int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
    cout <<endl;
}

void bubble(){
    cout << "--------------------------------bubble Sort-----------------------------" <<endl;
    int a[] = {5,4,3,2,1};
    printArray(a, 5);
    bubbleSort(a, 5);
    printArray(a, 5);
    cout << "--------------------------------bubble Sort-----------------------------" <<endl;
}

void selection(){
    cout << "--------------------------------selection Sort-----------------------------" <<endl;
    int a[] = {5,4,3,2,1};
    printArray(a, 5);
    selectionSort(a, 5);
    printArray(a, 5);
    cout << "--------------------------------selection Sort-----------------------------" <<endl;
}

void insertion(){
    cout << "--------------------------------insertion Sort-----------------------------" <<endl;
    int a[] = {5,4,3,2,1};
    printArray(a, 5);
    insertionSort(a, 5);
    printArray(a, 5);
    cout << "--------------------------------insertion Sort-----------------------------" <<endl;
}

int main(){
    insertion();
    cout <<endl;
    selection();
    cout <<endl;
    bubble();
    cout <<endl;
    return 0;
}