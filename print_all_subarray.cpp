#include<iostream>
using namespace std;
void printing_subarray(int arr[],int n)  // [1,2,3,4]==[1],[2],[3],[4],[1,2],[1,3]
{
    for(int i=0; i<n; i++)
    {
       for(int j=i; j<n; j++) 
       {
           for(int k=i;k<=j; k++)
           {
               cout<<arr[k]<<" ";
           }
           cout<<endl;
       }
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(int );
    printing_subarray(arr,n);
    

}