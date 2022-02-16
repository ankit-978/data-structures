// lower_bound== kisi array m agr di hue key agr h to vo key uski lower bound value ho gyi..
// or agr di hue key agr usme ni h to usse just choti wali value uski lower bound value ho gyi..



#include<iostream>
#include<vector>
using namespace std;
int lower_bound(vector<int>arr,int val)
{
    int lower_b=0;
    int min_bound=0;
    for(int i=0; i<arr.size(); i++)
    {
        if(arr.at(i)==val)
        {
         lower_b=val;
        }
        else if(arr.at(i)<val)
        {
            int var=arr.at(i);
            if(min_bound<var)
            {
                min_bound=var;
            }
    
            lower_b=min_bound;


        }
    }
    return lower_b;
}
int main()
{
    vector<int>arr1={-1,-1,2,3,5};
    vector<int>arr2={1,2,3,4,6};
    int res1=lower_bound(arr1,4);
    int res2=lower_bound(arr2,4);
    cout<<res1<<endl;
     cout<<res2<<endl;
}