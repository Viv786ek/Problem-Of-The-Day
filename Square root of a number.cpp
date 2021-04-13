long long int floorSqrt(long long int x) 
{
    long long int i;
for(i=1;i*i<=x;i++);
return i-1;
}

/*// Your code goes here 
   // Base cases
    if (x == 0 || x == 1) 
       return x;

    // Do Binary Search for floor(sqrt(x))
    int start = 1, end = x, ans;   
    while (start <= end) 
    {        
        int mid = (start + end) / 2;

        // If x is a perfect square
        if (mid*mid == x)
            return mid;

        // Since we need floor, we update answer when mid*mid is 
        // smaller than x, and move closer to sqrt(x)
        if (mid*mid < x) 
        {
            start = mid + 1;
            ans = mid;
        } 
        else // If mid*mid is greater than x
            end = mid-1;        
    }
    return ans;*/
