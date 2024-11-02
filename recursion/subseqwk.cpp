bool func(int ind, int sum, vector<int>&nums){
    if(ind==nums.size()){
        return sum==0;
    }
    bool includecurrent =func(ind+1,sum-nums[ind],nums);
    bool excludecurrent =func(ind+1,sum,nums);
    return includecurrent || excludecurrent;
}
bool checksubsum(vector<int>& nums, int k){
    return func(0,k,nums);
}