void func(int ind, int sum,vector<int>&nums,vector<int>&ans){
    if(ind == nums.size()){
        ans.push_back(sum);
    }
    func(ind+1,sum+nums[ind],nums,ans);
    func(ind+1,sum,nums,ans);
}
vector<int> subsetsum(vector<int>& nums){
    vector<int>ans;
    func(0,0,nums,ans);
    return ans;
}