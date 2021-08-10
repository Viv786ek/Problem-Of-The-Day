int find(int N){
        // code here
        // Find value of 2 ^ (1 + floor(Log n)) 
        // which is a power of 2 whose value 
        // is just above n. 
        int p = 1; 
        while (p <= N) 
        p *= 2; 
        
        // Return 2n - 2^(1+floor(Logn)) + 1 
        return (2 * N) - p + 1;
    }
