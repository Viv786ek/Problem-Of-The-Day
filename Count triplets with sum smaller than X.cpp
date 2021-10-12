long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	      int l,r;
    long int s=0;
    long int count=0;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        l=i+1;
        r=n-1;
        while(l<r){
            s=arr[i]+arr[l]+arr[r];
            if (s>=sum){
                r--;
            }
            else{
                count+=r-l;
                l++;
            }
        }
    }
    return count;
	}
