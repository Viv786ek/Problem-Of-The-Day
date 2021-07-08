int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	
    	int platform_needed=1;
    	int i=1,j=0,res=1;
    	while(i<n && j<n){
    	    if(arr[i]<=dep[j]){
    	        platform_needed++;
    	        i++;
    	    }
    	    else if(arr[i]>dep[j]){
    	        platform_needed--;
    	        j++;
    	    }
    	    
    	    if(res<platform_needed)
    	        res = platform_needed;
    	}
    	return res;
    }
