/*Insert_Value_At_given_position*/
#include<iostream>
using namespace std;

int main(){
    int n; 
    cout<<"Enter the size of the array:" << " ";
    cin>>n;
    int array[n];
    cout<<"Enter the elements of the array:" << " ";
    for(int i=0;i<n;i++){
    cin>>array[i];  
    }
    cout<<"Here is your your array: "<<" ";
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    // main code for inserting element
    cout<< "Enter the index position and value where you want to insert an element:" << " ";
    int position, value;
    cin>>position>>value;

    if (position<=n)
    {
    for (int i = n; i > position; i--)
        {
            array[i] = array[i-1];
        }
        array[position] = value;
        n++;

    cout<<"Here is your your array: "<<" ";
    for (int i = 0; i < n; i++)
    {
        cout<<array[i] <<" ";
    }
    }
    else{
        cout<<"Invalid position"<<endl;
    }
   
    return 0;
}