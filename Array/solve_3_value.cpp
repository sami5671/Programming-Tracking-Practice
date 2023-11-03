/*Update Value at a Given Position in Array*/

#include<iostream>
using namespace std; 

int main(){

    int n;
    cout<<"Enter the Size of Array: " << " ";
    cin>>n;
    int array[n];
    cout<<"Enter the Array Elements: " << " ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"Enter the index position and value where you want to update the value of the Array: "<< " ";
    int position, value;
    cin>>position>>value;

    if (position<n)
    {
        array[position]=value;
        cout<<"Updated Array is: ";
        for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
         }
    }
    else{
        cout<<"Invalid Position Update is not possible";
    }
    return 0;
}