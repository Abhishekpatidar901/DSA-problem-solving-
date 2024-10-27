int func(int mid, int n, int m){
    long long ans =1;
    for(int i=1;i<=n;i++){
    ans *= mid;
    if(ans >m)return 2;
    }
    if(ans == m)return 1;
    return 0;
}
int nthroot(int n, int m){
    int low =1 , high =m;
    while(low<=high){
        int mid =(low+high)/2;
        int midn = func(mid,n,m);
        if(midn==1){
            return mid;        }
            else if(midn ==0){
                low =mid+1;
            }else{
                high = mid-1;
            }

    }
    return -1;
}