int func(int ind, int sum, vector<int>&nums){
    if(sum==0){
        return 1;
    }
    if(sum<0 || ind== nums.size())return 0;
    return func(ind+1,sum-nums[ind],nums)+func(ind+1,sum,nums);
}
int countsubwsk(vector<int>& nums, int k){
    return func(0,k,nums);
}