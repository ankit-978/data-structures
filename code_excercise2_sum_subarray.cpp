/*#include<iostream>
using namespace std;
int sum_of_subarray(int arr[],int n)
{
    int current=0;
    int max_number=0;
    for(int i=0; i<n; i++)
    {
       current=current+arr[i];
        if(current<0)
        {
            current =0;
        }
           max_number= max(max_number,current);
    }
    return max_number;
}
int main()
{
    int arr1[]={1,-2,3,4,4,-2};
    int n1=sizeof(arr1)/sizeof(int);
    int arr2[]={5,0,-1,0,1,2,-1};
    int n2=sizeof(arr2)/sizeof(int);
    int res1=sum_of_subarray(arr1,n1);
    int res2=sum_of_subarray(arr2,n2);
    cout<<res1<<endl;
    cout<<res2<<endl;

} */  


/*#include<iostream>
#include<vector>
using namespace std;
int sum_of_subarray(vector<int> arr)
{
    int current=0;
    int max_number=0;
    for(int i=0; i<arr.size(); i++)
    {
       current=current+arr.at(i);
        if(current<0)
        {
            current =0;
        }
           max_number= max(max_number,current);
    }
    return max_number;
}
int main()
{
    vector<int> arr1={1,-2,3,4,4,-2};
   vector< int> arr2={5,0,-1,0,1,2,-1};
    int res1=sum_of_subarray(arr1);
    int res2=sum_of_subarray(arr2);
    cout<<res1<<endl;
    cout<<res2<<endl;

} */   

