#include<iostream>
using namespace std;

/* trick to solve:....>>its just like a pattern .. for we use two loop one print satrtin value
other loop print next value of i..*/


void printing_all_pairs(int collage[],int n)
{
    for(int i=0; i<n; i++)
    {
        int x=collage[i];
        for(int j=i+1; j<n; j++)
        {
           int y=collage[j];
          cout<<"("<<x<<","<<y<<")"<<endl;
        }
    }
}
int main()
{
    int collage[]={1,2,3,4,5,6,7,8,9};
    int  n=sizeof(collage)/sizeof(int);
    printing_all_pairs(collage,n);

}