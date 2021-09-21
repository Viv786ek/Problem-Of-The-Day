int maxCandy(int arr[], int n) 
    { 
        // Your code goes here
        int s = 0;
        int e = n - 1;
        int res = 0;
        while(s < e){
            res = max(res,min(arr[s],arr[e]) * (e - s - 1));
            if(arr[s] < arr[e]){
                s++;
            }else{
                e--;
            }
        }
        return res;
    }
