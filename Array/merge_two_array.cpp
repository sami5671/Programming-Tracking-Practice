/*MERGE TWO ARRAY */
#include<iostream>
using namespace std; 
int main(){

int n,m;
    cout<<"Enter the size of the the 1st and 2nd array: ";
    cin>>n>>m;
    int Array1[n];
    int Array2[m];
    cout<<"Enter the 1st Array Element"<< " ";
    for (int i = 0; i < n; i++)
    {
        cin>>Array1[i];
    }
    cout<<"Enter the 2nd Array Element"<< " ";
    for (int i = 0; i < n; i++)
    {
        cin>>Array2[i];
    }
    int MergedArray[n+m];

    // merging 
    int i,j;
    for (i = 0; i < n; i++)
    {
        MergedArray[i] = Array1[i];
    }
    for ( j = 0; j < m; j++)
    {
        MergedArray[i] = Array2[j];
        i++;
    }
    // printing
    cout<<"Merged array is ";
    for (int i = 0; i < m+n; i++)
    {
      cout<<MergedArray[i]<<" ";
    }
    return 0;
}