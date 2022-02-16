#include<iostream>
using namespace std;
int sum_of_subarray(int arr[],int n)
{
  //int current_sum=0; ...>> agr hm ye yaha use kremge to ye sb subarray ka sum print kr dega
  int largest_sum=0;
  for(int i=0; i<n; i++)
  {
      for(int j=i; j<n; j++)
      {
           int current_sum=0;
          for(int k=i; k<j; k++)
          {
              current_sum +=arr[k];
             largest_sum= max(current_sum,largest_sum);

          }
      }
  }
  return largest_sum;

}
int main()
{
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);
    int res=sum_of_subarray(arr,n);
    cout<<res<<endl;


}