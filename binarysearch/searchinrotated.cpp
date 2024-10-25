int search(vector<int>& nums,int k){
    int l=0;
    int h =nums.size()-1;
    while(l<=h){
        int m =(l+h)/2;
        if(nums[m]==k){
            return m;
        }
        if(nums[l]<nums[m]){
            if(nums[l]<=k && k<=nums[m]){
                h=m-1;
            }else{
                l=m+1;
            }
        }else{
            if(nums[m]<=k && k<=nums[h]){
                l=m+1;
            }else{
                h=m-1;
            }
        }
    }
    return -1;
}