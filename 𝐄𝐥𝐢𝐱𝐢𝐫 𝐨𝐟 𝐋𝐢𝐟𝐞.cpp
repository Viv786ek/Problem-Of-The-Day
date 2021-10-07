class Solution
{
    public:
    int maxFrequency(string s)
    {
    	// code here
    	int n = s.size(), mn = n + 1, ans = 1, z[n] = {};
    for (int i = 1, l = 0, r = 0; i < n; i++) {
        if (i <= r)z[i] = min(r - i + 1, z[i - l]);
        while (i + z[i] < n && s[z[i]] == s[i + z[i]])z[i]++;
        if (i + z[i] - 1 > r)l = i, r = i + z[i] - 1;
        if (z[i] && z[i] + i == n)mn = min(mn, z[i]);
    }
    for (int i = 1; i < n; i++)if (z[i] >= mn)ans++;
    return ans;
    }
};
/*

int counter(string str,string s)
   {
       int m=s.length();
       string st;
       int ans=0;
       for(int i=0;i<=str.length()-m;i++)
       {
           st=str.substr(i,m);
           if(st==s)
           ans++;
       }
       return ans; 
   }
   int maxFrequency(string S)
   {
    // code here
    string s1,s2;
    for(int i=0,j=S.length()-1;i<j;i++,j--)
    {
        s1+=S[i];
        s2=S[j]+s2;
        if(s1==s2)
        break;
    }
    if(s1!=s2||S.length()==1)
    return 1;
    return counter(S,s1);//counter count the frequency of substring s1 in string S
   }
   */
