int findmin(vector<int>&arr){
    int n= arr.size();
    int l=0;
    int h =n-1;
    int ans =INT_MAX;
    while(l<=h){
        int m =(l+h)/2;
        if(arr[l]<=arr[m]){
            ans = min(ans,arr[l]);
            l=m+1;
        }else{
            ans =min(ans, arr[m]);
            h=m-1;
        }
    }
    return ans;
    }