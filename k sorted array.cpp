class Solution {
  public:
   int find(int arr[], int n, int x)
    {
        int low = 0, high = n-1;
        
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            
            if(arr[mid] == x)
            {
                return mid;
            }
            
            if(arr[mid] < x)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    string isKSortedArray(int arr[], int n, int k)
    {
        //code here.
        int arr2[n];
        for(int i=0;i<n;++i){
            arr2[i]=arr[i];
        }
        sort(arr2,arr2+n);
        for(int i=0;i<n;i++){
            int index = find(arr2,n,arr[i]);
            if(k<abs(i-index)){
                return "No";
            }
        }
        return "Yes";
    }
};
