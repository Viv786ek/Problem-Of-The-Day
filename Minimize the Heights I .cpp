class Solution{   
public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int res=arr[n-1]-arr[0];
        int maxi = arr[n-1];
        int mini=arr[0];
        
        for(int i=1;i<n;i++){
            maxi = max(arr[i-1]+k,arr[n-1]-k);
            mini = min(arr[0]+k,arr[i]-k);
            
            res = min(res,maxi-mini);
        }
        return res;
    }
};
