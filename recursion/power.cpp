void func(int ind, int n, vector<int>& nums,vector<int>&arr, vector<vector<int>>&ans){
    if(ind ==n){
        ans.push_back(arr);
        return;
    }
    func(ind+1,n,nums,arr,ans);
    arr.push_back(nums[ind]);
    func(ind+1,n,nums,arr,ans);
    arr.pop_back();
}
vector<vector<int>>powerset(vector<int>&nums){
    vector<vector<int>>ans;
    vector<int>arr;
    func(0,nums.size(),nums,arr,ans);
    return ans;
}