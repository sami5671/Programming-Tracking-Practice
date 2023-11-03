/*
Iterative way :

1) Initialize start and end indexes as start = 0, end = n-1 
2) In a loop, swap arr[start] with arr[end] and change start and end as follows : 
start = start +1, end = end – 1
*/

#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int temp;
    for (int start = 0, end = n-1; start< end; start++, end--)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
}

void printArray(int arr[], int n){
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] <<" ";
        }
        
}
int main(){
    int n;
    cout<< "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout<<"Enter the Elements of the array: ";
    for (int i = 0; i < n; i++)
    {
    cin >> arr[i];
    }
    reverseArray(arr, n);
    cout<< "Reverse Array Is: ";
    printArray(arr, n);
}