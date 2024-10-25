bool searchs(vector<int>&nums, int k){
    bool ans= false;
    int n=nums.size()-1;
    int l=0;
    int h =n;
    while(l<=h){
        int m = (l+h)/2;
        if(nums[m]==k){
            ans=true;
        }
        if(nums[l]<=nums[m]){
            if(nums[l]<=k && nums[m]>=k){
                h=m-1;
            }else{
                l=m+1;
            }
        }else{
            if(nums[m]<=k && nums[h]>=k){
                l=m+1;
            }
        }
    }
    return ans;
}