#include<iostream>
using namespace std;
int main()
{   int k=3;
    int arr[100]={10,15,20,30,40};
    int size=5;
    
    cout<<"inserting 4 in the index k=3 ";
    for(int i=size;i>k;i--)
    {
       arr[i]=arr[i-1];
    }
    arr[k]=4;
    size++;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
    
}