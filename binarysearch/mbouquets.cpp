bool possible(vector<int>&nums, int day, int m , int k){
    int n = nums.size();
    int cnt =0;
    int noofB =0;
    for(int i=0;i<n;i++){
        if(nums[i]<=day){
            cnt++;
        }else{
            noofB+=(cnt/k);
            cnt=0;
        }
    }
    noofB +=(cnt/k);
    return noofB>=m;
}
int rosegarden(int n, vector<int>nums, int k, int m){
    long long val = m* 1ll *k* 1ll;
    i(val>n) return -1;
    int mini =INT_MAX;
    int maxi =INT_MIN;
    for(int i=0;i<n;i++){
        maxi =max(maxi,nums[i]);
        mini = min(mini,nums[i]);
    }
    int left = mini, right =maxi, ans =-1;
    while(left <=right){
        int mid =left +(right-left)/2;
        if(possible(nums,mid,m,k)){
            ans=mid;
            right = mid-1;
        }else{
            left =mid+1;        }
    }
    return ans;
}