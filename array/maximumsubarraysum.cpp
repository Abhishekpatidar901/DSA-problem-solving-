int maxsubarray(vector<int>& nums){
    long long maxi = LLONG_MIN;
    int sum =0;
    int n = nums.size();
    for(int i = 0 ;i<n;i++){
        for(int j=i;j<nums.size();j++){
            int sum =0;
            for(int k=i;k<=j;k++){
                sum+= nums[k];
            }
            if(sum>maxi){
                vector<int>ans(nums.begin()+i,nums.begin()+j);
            }
            maxi = max(maxi,sum);
        }
    }
    return maxi;
}
int maxsubarrat(vector<int>& nums){
    int maxi =INT_MIN;
    int start =0 , end =0, tempstart =0;
    for(int i=0;i<n;i++){
        int sum =0;
        tempstart=i;
        for(int j=i;j<n;j++){
          sum += nums[j];
          if(maxi<sum){
            maxi= sum;
            start =tempstart;
            end =j;
          }
        }

    }
    return maxi;

}

int maxisub(vector<int>& nums){

    int n = nums.size();
    int maxi = INT_MIN;
    int sum = 0;
   int start =-1;
   int end=-1;
    int tempstart=0;
    for(int i=0;i<n;i++){
        if(sum==0){
            tempstart=0;
        }
        sum+= nums[i];
        if(sum>maxi){
            start =tempstart;
            end=i;
            maxi =sum;
        }
        if(sum<0){
            sum=0;
        }
    }
 return maxi;
}