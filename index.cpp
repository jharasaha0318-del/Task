#include<iostream>
using namespace std;
int main()
{
    int marks[]={20,50,80,90,93};
    int size=5;
    int target=90;
    for(int i=0;i<size;i++)
    {
      if (marks[i]==target)
     {
         cout<<"Index= "<<i<<endl;
         
    }
}
    cout<<"not found"<<endl;
}