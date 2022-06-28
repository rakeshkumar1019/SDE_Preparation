// https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/
// Time Complexity: O(n)

// Auxiliary Space: O(1) as no extra space was needed.

// Total number of comparisons: Different for even and odd n, see below: 

//        If n is odd:    3*(n-1)/2  
//        If n is even:   1 Initial comparison for initializing min and max, 
//                            and 3(n-2)/2 comparisons for rest of the elements  
//                       =  1 + 3*(n-2)/2 = 3n/2 -2

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Pair{
  int max;
  int min;
};
struct Pair findMinMax(vector<int>arr){
  int n=arr.size();
  struct Pair res;
  int index;
  if(n%2==0){
     res.max=max(arr[0],arr[1]);
     res.min=min(arr[0],arr[1]);
     index=2;
  }else{
      res.max=arr[0];
      res.min=arr[0];
      index=1;
  }
  
  while(index<=n-2){
      cout<<"Index"<<index<<endl;
     res.max=max(res.max,max(arr[index],arr[index+1]));
     res.min=min(res.min,min(arr[index],arr[index+1]));
     index=index+2;
  }
  return res;

}
int main(){
 int n;
 cin>>n;
 vector<int>arr;
 for(int i=0;i<n;i++){
   int temp;
   cin>>temp;
   arr.push_back(temp);
 }
 Pair res=findMinMax(arr);
 cout<<res.min<<" "<<res.max<<endl;

}
