int majorityElement(int a[], int n)
{
        
    // your code here
     int majIndex = 0; int ct = 1;
    
    // Voting algorithm for finding majority element
    
    for(int i = 1; i < n; i++){
        if(a[majIndex] == a[i])
            ct++;
        else
            ct--;
            
        if(ct == 0)
            majIndex = i, ct = 1;
    }
    
    // Checking whether the candidate that we found 
    // is really the majority element
    
        ct = 0;
    
        for(int i = 0; i < n; i++){
            if(a[i] ==  a[majIndex])
                ct++;
        }
        
        return (ct > n/2) ? a[majIndex] : -1;
}
