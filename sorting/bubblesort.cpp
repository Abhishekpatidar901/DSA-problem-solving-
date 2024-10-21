#include<bits/stdc++.h>
using namespace std;

void bubblesort(vector<int>&a){
    int n =a.size();
    for(int i =0;i<n;i++){
        bool didswap =false;
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                didswap = true;
            }
        }
        if(!didswap){
            break;
        }
    }
    return a;
}
int main(){
  vector<int>arr ={5,2,3,1,4};
  bubblesort(arr);

  for(auto i: arr){
    cout<<i<<" ";
  }


    return 0;
}