void merge(vector<int>&nums1,int m, vetor<int>&nums2,int n){
    vector<int>merged(m+n);
    int left =0;
    int right=0;
    int index=0;
    while(left<m && right<n){
        if(nums1[left] < =nums2[right]){
            merged[index++] = nums1[left++];

        }else{
            merged[index++] =nums2[right++];
        }
    }
    while(left <m){
        merged[index++] = nums1[left++];
    }
    while(right<n){
        merged[index++]= nums2[right++];
    }
    for(int i=0;i<m+n;i++){
        nums1[i]= merged[i];
    }
}


void merge(vector<int>&nums1, int m, vector<int>&nums2, int n){
    int left= m-1;
    int right=0;
    while(left>=0 && right<n){
        if(nums1[left]>nums2[right]){
            swap(nums1[left],nums2[right]);
            left--, right++;
        }else{
            break;
        }
    }
    sort(nums1.begin()+0, nums1.begin()+m);
    sort(nums2.begin(),nums2.end());
    for(int i = m;i<m+n;i++){
        nums1[i]= nums2[i-m];
    }
}


void merge(vector<int>&nums1, int m, vector<int>&nums2, int n){
    int len = n+m;
    int gap =(len/2)+(len%2);
    while(gap>0){
        int left = 0;
        int right =left+gap;
        while(right<len){
            if(left<m && right>=m){
                swapifgreater(nums1,nums2,left,right-m);
            }else if(left>=m){
                swapifgreater(nums2,nums2,left-m,right-m);
            }else{
                swapifgreater(nums1,nums1,left,right);
            }
            left++, right++;
        }
        if(gap==1) break;
        gap = (gap/2) + (gap%2);
    }
    for(int i=m;i<m+n;i++){
        nums1[i]= nums2[i-m];
    }
}