bool find4Numbers(int a[], int n, int X)  
{
    sort(a,a+n);
    for(int i=0; i<n-3; i++){
        for(int j=i+1; j<n-2; j++){
            int start = j+1,end = n-1;
            int target = X-a[i]-a[j];
            while(start < end){
                if(a[start]+a[end] == target){
                    return true;
                }
                else if(a[start]+a[end] < target){
                    start += 1;
                }
                else{
                    end -= 1;
                }
            }
        }
    }
    
    return false;

    
}
