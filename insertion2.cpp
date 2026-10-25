#include<iostream>
using namespace std;
int main()
{
    int arr[100]={5,10,15,20,25};
    int size=5;
    cout<<"entering 126 in beginning\n ";
    for(int i=size;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=126;
    size++;

    cout<<"after entering ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}