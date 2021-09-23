int countSetBits(int n)
    {
        // Your logic here
        int ans=0;
       for(int i=1;i<=n;){
           i*=2;
           int m=((n+1)/i);
           int r=(n+1)%i;
           int total=m*(i/2);
           if(r>(i/2))
               total+=(r-(i/2));
           ans+=total;    
       }
       return ans;
    }
