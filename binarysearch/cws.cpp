bool canweplace(vector<int>&nums, int dist, int cows){
    int n=nums.size();
    int cntcows =1;
    int last = nums[0];
    for(int i=1;i<n;i++){
        if(nums[i]-last >= dist){
            cntcows++;
            last= nums[i];
        }
        if(cntcows >= cows){
            return true;
        }
    }
    return false;
}
int aggressive(vector<int>&nums, int k){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    int low =1, high = nums[n-1]-nums[0];
    while(low<= high){
        int mid =(low + high)/2;
        if(canweplace(nums,mid,k)==true){
            low =mid+1;
        }else{
            high =mid-1;
        }
    }
    return high;
    }