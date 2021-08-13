class Solution{
public:	
	
	int palindromicStrings(int n, int k)
	{
	    // Your code goes here
	    int mod=1000000007;
long long ans=1;
long long sum=0;

for(int i=1;i<=n;i+=2) {

ans=(ans*k)%mod;

sum=(sum%mod+ans%mod)%mod;

if(i!=n)

sum=(sum%mod+ans%mod)%mod;

if(i==n&&n%2==0)

sum=(sum%mod+ans%mod)%mod;

k--;

}

return sum;
	}
};
