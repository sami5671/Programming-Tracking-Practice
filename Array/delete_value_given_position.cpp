/*Delete Value at a Given Position in Array*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int array[n];
    cout<< "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    cout<< "Enter the position where you wanna delete: ";
    int position;
    cin>>position;
    if (position>n)
    {
        cout<<"Delete is not possible Invalid position entered!!!!"<<endl;
    }else{
        for (int i = position+1; i < n; i++)
        {
            array[i-1] = array[i];
        }
        n=n-1;
        for (int i = 0; i < n; i++)
        {
            cout<<array[i]<<" ";
        }
    }
    return 0;
}