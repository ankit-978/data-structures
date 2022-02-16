// Array....>> array is a element of similar tyype of data store in a allocated memory..
// like....>>  marks[5]={15,25,35,45,55} marks of 5 students



// if we use array in function value pass in parameter is by refrence.....

/*#include<iostream>
using namespace std;
void printarray(int arr[])
{
    cout<<"in function "<<sizeof(arr)<<endl;
    int n=sizeof(arr)/sizeof(int);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
    }

}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(int);
    cout<<"in main "<<sizeof(arr)<<endl<<n<<endl;   
    printarray(arr);
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
    }


}*/

/* in main array is present but in function adress of array is present.
..to jo value parameter m pass ho ri h vo call by refrence h or sirf array dene pr
vo pointer hota h is liye vo 8 byte of size use krta h.. isliye main or
 function m alg value a ri h isliye hme parametrer m n ka size bhi dena pdta h..
*/


 #include<iostream>
using namespace std;
void printarray(int arr[],int n)
{
    cout<<"in function "<<sizeof(arr)<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
    }

}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(int);
    cout<<"in main "<<sizeof(arr)<<endl<<n<<endl;   
    printarray(arr ,n);
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
    } 

}