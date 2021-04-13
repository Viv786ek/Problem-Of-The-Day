int MissingNumber(vector<int>& array, int n) {
    // Your code goes here
    /*int n_elements_sum = n * (n + 1) / 2 ;
    int sum = 0;
 
    for(int i = 0; i < n - 1; i++)
        sum += array[i];
    return n_elements_sum-sum;*/
    int n_sum = (n*(n+1)) /2;
    int sum =0;
    for(int i=0;i<n-1;i++){
        sum += array[i];
    }
    
    return n_sum - sum;
}
