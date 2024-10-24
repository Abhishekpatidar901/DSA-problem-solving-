int longestconsecutive(vector<int>& nums){
    int n=nums.size();
    if(n==0){
        return 0;
    }
    int longest =1;
    for(int i=0;i<n;i++){
        int x= nums[i];
        int cnt=1;
        while(linearsearch(nums,x+1)==true){
            x=x+1;
            cnt+=1;
        }
        longest = max(longest,cnt);
    }
    return longest;
}

int longestcons(vector<int>& nums){
    int n= nums.size();
    if(n==0){
        return 0;
    }
    sort(nums.begin(),nums.end());
    int lastsmaller = INT_MIN;
    int cnt=0;
    int longest =1;
    for(int i=0;i<n;i++){
        if(nums[i]-1==lastsmaller){
            cnt+=1;
            lastsmaller = nums[i];
        }else if(nums[i] != lastsmaller){
            cnt=1;
            lastsmaller =nums[i];
        }
        longest = max(longest, cnt);

    }
    return longest;
}

int longestconsecutive(vector<int>&a){
    int n = a.size();
    if(n==0){
        return 0;
    }
    int longest =1;
    unordered_set<int>st;
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }
    for(auto it:st){
        if(st.find(it-1) == st.end()){
            int cnt=1;
            int x =it;
            while(st.find(x+1) != st.end()){
                x=x+1;
                cnt=cnt+1;
            }
            longest =max(longest,cnt);
        }
    }
    return longest;
}