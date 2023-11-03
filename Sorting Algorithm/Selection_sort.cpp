// **************SELECTION SORT ALGORITHM****************************

#include<iostream>
using namespace std;

// creating function for selection sort
void selectionSort(int arr[], int n){
// main section of selection sort 
    int temp;

    for (int i = 0; i < n-1; i++)
    {
        int  min = i;

        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
              min = j;
            }
           
        }
         if (min != i)
            {
               temp = arr[i];
               arr[i] = arr[min];
               arr[min] = temp;
            }
    }
    
}
// creating function for printing result
void displaySortedArray(int arr[], int n){
// this section is for printing the new sorted array
    cout << "NEW SORTED ARRAY IS: "<< " ";
        for (int q = 0; q < n; q++)
        {
            cout<< arr[q] <<" ";
        }
}

// main function
int main(){

    int n;
    cout << "ENTER THE SIZE OF THE ARRAY: "<< " ";
    cin>>n;
    int arr[n];

    cout << "ENTER THE ARRAY ELEMENTS: "<< " ";
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }

    selectionSort(arr, n);
    displaySortedArray(arr, n);
    
}