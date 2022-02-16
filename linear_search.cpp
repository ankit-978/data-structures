#include<iostream>
using namespace std;
int linear_search(int marks[],int n,int key)
{
    for(int i=0; i<n; i++)
    {
    if(marks[i]==key)
    {
        return i;
    }

    }
}
int main()
 {
     int marks[]={10,20,30,40,50,60,70,80,90};
     int n=sizeof(marks)/sizeof(int);
     int key;
     cin>>key;
     int index=linear_search(marks,n,key);
     if(index!=-1)
     {
         cout<<"key is present "<<key<<" at "<<index<<endl;
     }
     else
     {
         cout<<"key is not found"<<endl;
     }
    

 }
