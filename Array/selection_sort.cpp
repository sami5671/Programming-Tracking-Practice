#include<iostream>
using namespace std;
void selection_sort(int arr[], int n){
    int min;

    for (int i = 0; i < n - 1; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min])
                min = j;
        }
        if (min != i)
            swap(arr[min], arr[i]);
    }
}

void print_array(int arr[], int size){
    for(int i=0; i< size; i++){
        cout<< arr[i]<< " ";
    }
}
int main(){
    int n;
    cout<<"Enter the size of the Array: ";
    cin>>n;
    int arr[n];
    cout<< "Enter the Array Elements: ";
    for(int i = 0; i<n; i++){
        cin>> arr[i];
    }
    selection_sort(arr, n);
    cout<< "Sorted Array is: "<<endl;
    print_array(arr, n);
}