#include<iostream>
using namespace std;
/*void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;

}*/


// trick to solve:....>> hm phle or akhiri ko ek dusre se swap kr re h or uske baad hm start
// or end ko update kr re h..
void reverse_array(int student[],int n)
{
   int start=0;
   int end=n-1;
   while(start<end)
   {
       swap(student[start],student[end]);
       start=start+1;
       end=end-1;
   }
   

}
int main()
{
int student[]={10,20,30,40,50,60,70,80,90};
int n=sizeof(student)/sizeof(int);
for(int i=0; i<n; i++)
{
    cout<<student[i]<<" ";
    cout<<endl;
}
reverse_array(student,n);
for(int i=0; i<n; i++)
{
    cout<<student[i]<<" ";
    cout<<endl;
}


}