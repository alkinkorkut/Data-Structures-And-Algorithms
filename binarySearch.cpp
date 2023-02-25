// Created by ALKIN KORKUT
// Recursive Binary Search Algorithm
// Best case complexity: 0(1)
// Average case complexity: 0(log n)
// Worst case complexity: 0(log n)

#include <iostream>
using namespace std;

int binarySearch(int array[], int left, int right, int target){
    if(right >= left){
        int mid = left + (right - left) / 2;
        if(array[mid] == target)
            return mid;
        if(array[mid] > target)
            return binarySearch(array, left, mid-1, target);
        if(array[mid] < target)
            return binarySearch(array, mid+1, right, target);
    }
    return -1;
}
int main(){
    int array[] = {10,20,30,40,50,60,70,80,90};
    int x = sizeof(array) / sizeof(array[0]);
    int target = 30;
    int output = binarySearch(array, 0, x-1, target);
    if(output != -1)
        printf("Element is found at index %d", output);
    else
        cout << "Element is not found" << endl;
    return 0;
}