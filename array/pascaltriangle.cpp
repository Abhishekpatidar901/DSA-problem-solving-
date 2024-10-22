vector<vector<int>>pascaltriangle(int numrows){
    vector<vector<int>>pascal(numrows);
    for(int i=0;i<numrows;i++){
        pascal[i].resize(i+1);
        pascal[i][i] =pascal[i][0]=1;
        for(int j=1;j<i;j++){
            pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];
        }
    }
    return pascal;
}