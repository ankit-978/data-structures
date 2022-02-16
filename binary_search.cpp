#include<iostream>
using namespace std;
int binary_search(int marks[],int n,int key)
{
   int start=0;
   int end=n-1;
   while(start>=end)
   {
       int mid=(start+end)/2;
       if(marks[mid]==key)
       {
           return mid;

       }
       else if(marks[mid]>key)
       {
           end=mid-1;
       }
       else if(marks[mid]<key)
       {
          start=mid+1;
       }
   }

}
int main()
{
    int marks[]={10,20,30,40,50,60,70,80,90};
    int n=sizeof(marks)/sizeof(int);
    int key;
    cin>>key;
    int index=binary_search(marks,n,key);
if(index!=-1)
{
    cout<<"key is present "<<key<<" at "<<index<<endl;
    
}
else
{
cout<<"key is not found"<<endl;
}
}

/* now lets talk about a little bit of tym complexbility...
so binary search is fast nd efficient but its needs sorted array..
nd if we want to check how many loop it takes to complete 
so we can say binary_search is the order of LOG....like

1=n/2^k
whre n is the number of value stored in array nd k is the loop ...


for example ....>> if we store 16 value in a array so it take to complete
2^k=16
k=log16 so it takes 4 loop to complete

