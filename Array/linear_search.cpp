/*
Linear Search Algorithm, 
Every element is considered as a potential match for the key and checked for the same.
If any element is found equal to the key, the search is successful and the index of that element is returned.
If no element is found equal to the key, the search yields “No match found”.

Step 1: Start from the first element (index 0) and compare key with each element (arr[i]).
Comparing key with first element arr[0]. SInce not equal, the iterator moves to the next element as a potential match.
Comparing key with next element arr[1]. SInce not equal, the iterator moves to the next element as a potential match.
Step 2: Now when comparing arr[2] with key, the value matches. So the Linear Search Algorithm will yield a successful message and return the index of the element when key is found (here 2).
*/
#include<iostream>
using namespace std;

void LinearSearch(int arr[], int n){
        int searchElement;
        cout<<"Enter the element you want to search: ";
        cin>>searchElement;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == searchElement)
            {
                cout<< searchElement << " Search Element found at index "<< i << endl;
                break;
            }
        }
}

int main(){
    int n;
    cout<< "Enter the size of the Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the number of elements: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    LinearSearch(arr, n);
}
