class Solution{
    public:
    int candies(int m, int n) 
    { 
    	// Your code goes here
    	int x = (m*n)-(m+n);
return x/2 + 1;
    } 
};
