int reversepair(vector<int>& nums){
    return mergesort(nums,0,nums.size()-1);
}

int mergesort(vector<int>&nums, int low, int high){
    int cnt=0;
    if(low>=high){
        return cnt;
    }
    int mid = low+(high-low)/2;
    cnt+= mergesort(arr,low,mid);
    cnt+=mergesort(arr,mid+1,high);
    cnt+=countpairs(arr,low,mid,high);
    merge(arr,low,mid,high);
    return cnt;
}
int countpairs(vector<int>&arr, int low, int mid, int high){
    int right= mid+1;
    int cnt=0;
    for(int i=low;i<=mid;i++){
        while(right<=high && arr[i]>2*arr[right])right++;
        cnt+=(right-(mid+1));
    }
    return cnt;
}

        void merge(vector<int>& arr, int low, int mid, int high) {
        // temporary array
        vector<int> temp; 
        
        // starting index of left half of arr
        int left = low;  
        
        // starting index of right half of arr
        int right = mid + 1; 

        // Merge and count reverse pairs
        while (left <= mid && right <= high) {
            
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            } 
            else {
                temp.push_back(arr[right]);
                right++;
                
            }
        }

        // Copy remaining elements from left half
        while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }

        // Copy remaining elements from right half
        while (right <= high) {
            temp.push_back(arr[right]);
            right++;
        }

        // Transfer sorted elements from temp to arr
        for (int i = low; i <= high; i++) {
            arr[i] = temp[i - low];
        }
    }