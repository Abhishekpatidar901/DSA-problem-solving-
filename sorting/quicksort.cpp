#include <bits/stdc++.h>
using namespace std;   
int partition(vector<int>&arr, int low, int high){
    int pivot = arr[low];
    int i =low;
    int j = high;
    while(i<j){
        while(arr[i]<=pivot && i<high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void quick(vector<int>&arr, int low, int high){
    if(low<high){
        int pindex =partition(arr,low,high);
        quick(arr,low,pindex-1);
        quick(arr,pindex+1,high);
    }
}
int main(){
   int n = arr.size();
   vector<int>arr = {1,4,2,5,6};
   quick(arr,0,n-1);

  for(auto i :arr){
    cout<< i<<" ";
  }
    return 0;
}