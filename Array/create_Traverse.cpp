/*Create an Array & Traverse */

#include<iostream>
using namespace std;

int main(){
    cout<<"please Enter the Size of Array: "<<" ";
    int n;
    cin>>n;

    int arr[n];
   
    cout<<"please Enter the Array Elements: "<<" ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"After traversing the Array elements: "<<" ";
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}