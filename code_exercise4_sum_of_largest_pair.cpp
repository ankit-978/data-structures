#include<iostream>
#include<vector>
using namespace std;
pair<int,int> sum_of_pair(vector<int>arr,int key)
{
 int l=0;
 int r=arr.size()-1;
 int current_sum;
 int closest_sum;
 pair<int ,int>res=make_pair(arr[l],arr[r]);
 closest_sum=res.first+res.second;
 
 while(r>l)
 {
     current_sum=arr[l]+arr[r];
     if(current_sum==key)
     {
         res.first=arr[l];
         res.second=arr[r];
         return res;

     }
     else
     {
         if(abs(closest_sum-key)>abs(current_sum-key))
         {
             res.first=arr[l];
             res.second=arr[r];
             closest_sum=current_sum;
             if(current_sum<key)
             {
                 l--;
             }
             else{
                 r++;
             }

         }

     }
 }
 return res;
}
int main()
{
  vector<int>arr={10,22,28,29,30,40};
  int key;
  cout<<"enter the key"<<endl;
  cin>>key;
  sum_of_pair(arr,key);

}