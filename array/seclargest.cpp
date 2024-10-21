#include<bits/stdc++.h>
using namespace std;
int secondlargest(vector<int>&arr){
    int maxi = INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(nums[i]>maxi){
            maxi = nums[i];
        }
    }
    int maxi1= INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>maxi1 && arr[i]!=maxi){
            maxi1 =arr[i];
        }
    }
    if(maxi1 == INT_MIN){
        return -1;
    }
    return maxi1;
}
int main(){
vector<int>arr = {2,5,3,6,1};
int secl =0;
secl =secondlargest(arr);


cout<<secl;

    return 0;
}