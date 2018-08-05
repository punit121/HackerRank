int Solution::lengthOfLastWord(const string A) {
    
    
    int space_count=0;
    bool char_flag=false;
    int n = A.length();
   
        int j=n-1;
        while(A[j] == ' '){
            space_count++;
        }
    
   // if(space_count==0)return 0;
    
    int last_length=0,i=0;
    i = n-1;//-space_count;
    while(i>=0){
        
        
        
        if(A[i]==' '){
            if(last_length!=0){
                return last_length;
            }
            last_length=0;
            i--;
        }
        else{
            last_length++;
            i--;
        }
    }
    
        
    
    
    return last_length;
}
