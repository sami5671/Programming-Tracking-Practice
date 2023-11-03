#include<iostream>
using namespace std;

int main(){
    int t, n,x, total;
    cin>> t;
    for (int i = 0; i < t; i++)
    {
      cin>> n >> x;
      total = n*x;
      if (total >= 10000 && total <= 99999)
      {
        cout<<"YES"<<endl;
      }else{
        cout<<"NO"<<endl;
      }
    }
    return 0;
}