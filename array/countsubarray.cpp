int subarraysum(vector<int>&nums,int k){
    int n = nums.size();
    unordered_map<int,int>prefixsummap;
    int curpre=0, subarrc=0;
    prefixsummap[0]=1;
    for(int i=0;i<n;i++){
        curpre+=nums[i];
        int sumtoremove =curpre-k;
        subarrc +=prefixsummap[sumtoremove];
        prefixsummap[curpre]+=1;
    }
    return subarrc;
}

    int subarraysWithXorK(vector<int> &nums, int k) {
               int n = nums.size(); 
        int xr = 0;
        map<int, int> mpp; 
        // setting the value of 0.
        mpp[xr]++; 
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            // prefix XOR till index i:
            xr = xr ^ nums[i];

            // By formula: x = xr^k:
            int x = xr ^ k;

            // add the occurrence of xr^k to the count:
            cnt += mpp[x];

            // Insert the prefix xor till index i into the map:
            mpp[xr]++;
        }
        return cnt;
    }