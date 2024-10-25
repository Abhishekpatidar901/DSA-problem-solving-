vector<int>getfloorancceil(vector<int>nums,int x){
    vector<int>ans;
    int ansf=-1, ansc=-1;
    int l=0;
    int h=nums.size()-1;
    while(l<=h){
        int m =(l+h)/2;
        if(nums[m]<=x){
            ansf =nums[m];
            l=m+1;
        }else{
            h =m-1;
        }

    }
    l=0;
    h= nums.size()-1;
    while(l<=h){
        int m = (l+h)/2;
        if(nums[m]>=x){
            ansc = nums[m];
            h=m-1;
        }else{
            l=m+1;
        }
    }
    ans.push_back(ansf);
    ans.push_back(ansc);
return ans;
}