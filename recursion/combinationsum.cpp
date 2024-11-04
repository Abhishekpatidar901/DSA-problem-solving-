void func(vector<int>&candidates, int i, int target,vector<int>& v, vector<vector<int>>&ans){
    if(target ==0){
        ans.push_back(v);
    }
    if(target<0){
        return;
    }
    if(i>= v.size()){
        return;
    }
    v.push_back(candidates[i]);
    func(candidates,i,target - candidates[i],v,ans);
    v.pop_back();
    func(candidates,i+1,target,v,ans);
}

vector<vector<int>> combinationsum(vector<int>& candidates, int target){
    vector<vector<int>>ans;
    vector<int>v;

    func(candidates, 0, target, v, ans);
    return ans;
}