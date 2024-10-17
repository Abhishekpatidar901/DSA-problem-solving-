#include <bits/stdc++.h>
using namespace std;

    int mostFrequentElement(vector<int>& nums) {
     int n = nums.size();
     int maxfreq = 0;
     
     int maxele;
     vector<bool>visited(n,false);
     for(int i=0;i<n;i++){
        if(visited[i])continue;
        int freq=0;
        for(int j =i;j<n;j++){
            if(nums[i]==nums[j]){
                freq++;
                visited[j] = true;
            }
        }

        if(freq>maxfreq){
            maxfreq = freq;
            maxele = nums[i];

        }else if(freq ==maxfreq){
            maxele = min(maxele,nums[i]);
        }
     }
     return maxele;
         }