#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the array size: ";
    cin>>n;
    int array[100];
    cout<<"enter the elements ";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    
    for(int i=n;i>0;i--)
    
    {
        array[i]=array[i-1];
    }
    array[0]=5;
    n++;
    
    cout << "array after inserting 5 at beginning: ";
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;


}