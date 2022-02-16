//  what is vector?
// vector is a dynamic array ...
// vector is a sequence container array that can change size ..
// vector xan be used in 1D and 2D array..
//in vector value can be passed by value..


// representation of array........>>>>vector<int>array..




#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr={1,2,3,4,5};  // representation of vector
    cout<<arr.size()<<endl;       // find element in vector 
    cout<<arr.capacity()<<endl;
   // push_back is function which is used to add element in vector at the end..

  arr. push_back(10);
   cout<<arr.size()<<endl;
   // arr.capacity is a function which is usd to check the capacity of vector like
  // if we inicilize the element then capacity is same like size of has but if we add element
  // then capacity will be doubled is is a specil about vector
   cout<<arr.capacity()<<endl;


   //if we want to print the vector element  we use same method which we used in array

   for(int i=0; i<arr.size(); i++)
   {
       cout<<arr[i]<<endl;
   }


}