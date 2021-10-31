int maxSumPairWithDifferenceLessThanK(int arr[], int n, int k)
    {
        // Your code goes here   
        sort(arr,arr+n);
        int i=n-1,j=n-2;
        int ans=0;
        while(j>=0){
            if(arr[i]-arr[j]<k){
                ans+=arr[i]+arr[j];
                i-=2;
                j-=2;
            }
            else{
                i--;
                j--;
            }
        }
        return ans;
    }
