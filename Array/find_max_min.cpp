/*Algorithm:

1. Initialize an array.
2. set index 0 to the max element and compare with the others array element
3. set index 0 to the min element and compare with the others array element
4. Print the minimum and maximum element.
*/

#include<iostream>
using namespace std;
int main(){
        int n;
        cout<<"Enter the size of the array: ";
        cin>>n;
        int Array[n];
        cout<<"Enter the Array Elements: "<< " ";
        for (int i = 0; i < n; i++)
        {
        cin>>Array[i];
        }

        int max = Array[0];
        int min = Array[0];

        for (int i = 0; i < n; i++)
        {
        if (max < Array[i])
        {
        max = Array[i];
        }
        if (min >  Array[i])
        {
        min = Array[i];
        }
        }
        cout<< "Max: "<< max<<" Min: "<< min<<endl;

    return 0;
}