int Solution::minPathSum(vector<vector<int> > &A) {
    
     if(A.size() == 0){
        return 0;
    }
    int m = A.size();
    int n = A[0].size();
    
    //if(m== &&)
    vector<vector<int> >tc(m, vector<int>(n));
    
    tc[0][0]=A[0][0];
    //first column
    for(int i=1;i<m;i++){
        tc[i][0]=tc[i-1][0]+A[i][0];
    }
    //first row
    for(int j=1;j<n;j++){
        tc[0][j]=tc[0][j-1]+A[0][j];
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            tc[i][j]=min(tc[i-1][j],tc[i][j-1])+A[i][j];
        }
    }
    
    return tc[m-1][n-1];
}
