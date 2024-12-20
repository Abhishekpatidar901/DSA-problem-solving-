class Solution{
int upperbound(vector<int>&arr , int x, int m){
    int low = 0;
    int high =m-1;
    int ans =m;
    while(low <=high){
        int mid = (low+high)/2;
        if(arr[mid]>x){
            ans =mid;
            high =mid-1;
        }else{
            low =mid+1;
        }
    }
    return ans;
}

int countsmallequal(vector<vector<int>>&matrix, int n, int m, int x){
    int cnt=0;
    for(int i=0;i<n;i++){
        cnt+= upperbound(matrix[i],x,m);
    }
    return cnt;
}
public:

    int findMedian(vector<vector<int>>&matrix) {
      int n = matrix.size();
      int m =matrix[0].size();

      int low = INT_MAX, high = INT_MIN;
              //Point low and high to right elements
        for (int i = 0; i < n; i++) {
            low = min(low, matrix[i][0]);
            high = max(high, matrix[i][m - 1]);
        }
        int req = (n*m)/2;
        while(low<=high){
            int mid = low + (high-low)/2;
            int smallequal =countsmallequal(matrix,n,m,mid);
            if(smallequal <= req) low= mid+1;
            else high = mid-1;
        }
        return low;
    }
};