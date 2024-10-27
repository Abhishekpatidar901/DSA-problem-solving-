    int findKRotation(vector<int> &nums)  {
        int n = nums.size();
        int l = 0;
        int h = n-1;
        int ans =INT_MAX;
        int ans1;
        while(l<=h){
         int m = (l+h)/2;
         if(nums[l]<=nums[h]){
            if(nums[l]<ans){
                ans1=l;
                ans = nums[l];
            }
            break;
         }
         if(nums[l]<=nums[m]){
            if(nums[l]<ans){
         ans = min(ans,nums[l]);
         ans1 =l;
            }

         l=m+1;
         }else{
            if(ans>nums[m]){
          ans = min(ans,nums[m]);
          ans1 = m;
            }
          h=m-1;
         }
        }
        return ans1;
    }