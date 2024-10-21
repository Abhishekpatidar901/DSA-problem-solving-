#include<bits/stdc++.h>
using namespace std;

void selectionsort(vector<int>&a){
    int n = a.size();
    for(int i=0;i<n;i++){
        int mini =i;
        for(int j=i+1;j<n;j++){
            if(a[min]>a[j]){
                mini =j;
            }
            
        }
        if(mini != i){
            swap(a[mini],a[i]);
        }
    }
}
int main(){


    vector<int>arr ={5,1,3,2,4};
    selectionsort(arr);

    for(auto i : arr){
        cout<<i<<" ";
    }
}