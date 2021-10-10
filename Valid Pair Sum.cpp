class Solution{
    
    public:
    long long ValidPair(int a[], int n) 
    { 
    	// Your code goes here 
    	  long long cnt=0;
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]<0){
            int x=upper_bound(a,a+n,abs(a[i]))-a;
            cnt+=(n-x);
        }
        else{
            int y=lower_bound(a+i+1,a+n,a[i])-a;
            cnt+=(n-y);
        }
    }
    return cnt;
    }   
};
