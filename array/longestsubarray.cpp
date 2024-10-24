    int longestSubarray(vector<int> &nums, int k)
    {
        int n = nums.size(); 
        int maxLength = 0;

        // starting index
        for (int startIndex = 0; startIndex < n; startIndex++) { 
            // ending index
            for (int endIndex = startIndex; endIndex < n; endIndex++) { 
                /* add all the elements of 
                   subarray = nums[startIndex...endIndex]  */
                int currentSum = 0;
                for (int i = startIndex; i <= endIndex; i++) {
                    currentSum += nums[i];
                }

                if (currentSum == k)
                    maxLength = max(maxLength, endIndex - startIndex + 1);
            }
        }
        return maxLength;
    }



        int longestSubarray(vector<int> &nums, int k)
    {
        int n = nums.size(); 
        int maxLength = 0;

        // starting index
        for (int startIndex = 0; startIndex < n; startIndex++) { 
            int currentSum = 0;
            // ending index
            for (int endIndex = startIndex; endIndex < n; endIndex++) { 

                /* add all the elements of 
                   subarray = a[startIndex...endIndex]  */
                currentSum += nums[endIndex];

                // When sum is equal to k, check the maxLength
                if (currentSum == k)
                    maxLength = max(maxLength, endIndex - startIndex + 1);
            }
        }
        return maxLength;
    }


    int longestsubarray(vector<int>&nums, int k){
        int n =nums.size();
        map<int,int>presummap;
        int sum=0;
        int maxlen=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum == k){
                maxlen =max(maxlen, i+1);
            }
            int rem =sum-k;
            if(presummap.find(rem) != presummap.end()){
                int len = i-presummap[rem];
                maxlen = max(maxlen, len);
            }
            if(presummap.find(sum)== presummap.end()){
                presummap[sum]=i;
            }
        }
        return maxlen;
    }