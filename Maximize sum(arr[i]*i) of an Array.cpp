int Maximize(int a[],int n)
    {
        // Complete the function
        sort(a,a+n);
        long long s=0;
        int mod=1e9+7;
        for(int i=0;i<n;i++) s+=(a[i]*1ll*i)%mod;
        return s%mod;
    }
