/*
Binary Search is defined as a searching algorithm used in a sorted array by repeatedly dividing 
the search interval in half. The idea of binary search is to use the information that the array 
is sorted and reduce the time complexity to O(log N). 

Conditions for when to apply Binary Search in a Data Structure:
To apply Binary Search algorithm:
1. The data structure must be sorted.
2. Access to any element of the data structure takes constant time.

Algorithm:
1. Divide the search space into two halves by finding the middle index “mid”. 
2. Compare the middle element of the search space with the key. 
   If the key is found at middle element, the process is terminated.
3. If the key is not found at middle element, choose which half will be used as the next search space.
   If the key is smaller than the middle element, then the left side is used for next search.
   If the key is larger than the middle element, then the right side is used for next search.
   This process is continued until the key is found or the total search space is exhausted.
*/


#include<iostream>
using namespace std;

void binarySearch(int arr[], int n){
    int searchValue;
    cout<< "Enter the number that you want to search: ";
    cin>> searchValue;
    int left = 0;
    int right = n-1;
    while (left <= right)
    {
     int middle = left + (right - left) / 2;
     if (arr[middle] == searchValue)
     {
        cout<< searchValue << " Searched value is present at index "<< middle<< endl;
     }
     if (arr[middle] < searchValue)
     {
       left = middle + 1;
     }else{
        right = middle -1;
     }
    }
}

int main(){
    int n;
    cout<< "Enter the size of the Array: ";
    cin >> n;
    int arr[n];
    cout<< "Enter the number of elements: ";
    for (int i = 0; i < n; i++)
    {
       cin >> arr[i];
    }
    binarySearch(arr, n);
    
}