/*#include<iostream>
using namespace std;
int max_element(int arr[],int n)
{
    int maximum_number=0;
    for(int i=0; i<n; i++)
    {
        if(maximum_number<arr[i])
        {
            maximum_number=arr[i];
        }

    }
    return maximum_number;
}
int main()
{
    int arr1[]={-3,4,1,1,2,3,9};
    int n1=sizeof(arr1)/sizeof(int);
    int arr2[]={-1,-2,-3,-3,8};
    int n2=sizeof(arr2)/sizeof(int);
int res1=max_element(arr1,n1);
int res2=max_element(arr2,n2);
cout<<res1<<endl;
cout<<res2<<endl;

}*/


/*#include<iostream>
#include<vector>
using namespace std;
int largest_element(vector<int>arr)
{
    int maximum_number=0;
    for(int i=0; i<arr.size(); i++)
    {
        if(maximum_number<arr.at(i))
        {
            maximum_number=arr.at(i);
        }

    }
    return maximum_number;
}

int main()
{
   vector<int>arr1={-3,4,1,2,3};
   int n1=arr1.size() ;
   vector<int>arr2={-1,-2,-3,-3,8};
   int n2=arr2.size();
  int res1=largest_element(arr1);
  int res2=largest_element(arr2);
  cout<<res1<<endl;
  cout<<res2<<endl;
}*/


