class Solution
{   
public:
    long long smallestpositive(vector<long long> array, int n)
    { 
        // code here 
        sort(array.begin(),array.end()); 
        long long int min_sum = 1; 
        for (int i = 0; i < n && array[i] <= min_sum; i++) 
            min_sum += array[i]; 
  
        return min_sum; 
        
    } 
};
