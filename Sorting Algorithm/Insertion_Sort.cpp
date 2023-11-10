#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    int temp,j;
    for (int i = 0; i < n; i++)
    {
        temp = arr[i];
        j = i -1;

        while (j >= 0 && arr[j] > temp)
        {
           arr[j+1] = arr[j];
           j--;
        }
        arr[j+1] = temp;
    }
    
}

// display the sorted array 
void displayInsertionSort(int arr[], int n) {
    cout<< "Here is the new Insertion sort Array: "<< " ";
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements: "<< " ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // calling the bubble sort function
    insertionSort(arr, n);
    displayInsertionSort(arr, n);
}