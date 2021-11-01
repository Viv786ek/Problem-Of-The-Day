 bool checkPrime(int n) 
{ 
    if(n==1)
    return false;
    
    for(int i=2;i*i<=n;i++) 
    if(n%i==0)
    return false;
    return true;
}
int isCircularPrime(int n) {
    // Code here
    int len=log10(n)+1;
 
    for(int i=1;i<=len;i++)
    {
        int lastdigit = n%10;
        n/=10;
        n =lastdigit*pow(10,len-1)+n;
        
        if(!checkPrime(n))
        return false;
    }
    
    return true;
}
