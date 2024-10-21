#include<bits/stdc++.h>
using namespace std;
void insertionsort(vector<int>&nums){
int n = nums.size();

for(int i =0;i<n;i++){
    int j=i;
    while(j>0 && nums[j-1]>nums[j]){
        swap(nums[j-1],nums[j]);
        j--;
    }
}
return nums;
}
int main(){
vector<int>arr ={4,5,3,6,2,1};
insertionsort(arr);

for(auto i : arr){
    cout<<i<<" ";
}
    return 0;
}