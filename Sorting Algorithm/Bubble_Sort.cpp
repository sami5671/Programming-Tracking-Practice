#include<iostream>
using namespace std; 

// function for bubble sort 
void bubbleSort(int arr[], int n){
    int temp, flag;
    for (int i = 0; i < n; i++)
    {
        flag = 0;
        for (int j = 0; j < n-1-i; j++)
        {
            if (arr[j]> arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        // when values dont need to swapped it breaks the program and will save the execution time 
        if (flag == 0)
        {
            break;
        }
        
        
    }
    
}

// display function for bubble sort
void displayBubbleSort(int arr[], int n){
    cout<< "Here is the new bubble sort Array: "<< " ";
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
}

// main function 
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
    bubbleSort(arr, n);
    displayBubbleSort(arr, n);
    
}
