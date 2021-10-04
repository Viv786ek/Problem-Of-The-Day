int maxSubstring(string S)
	{
	    // Your code goes here
	    int n=S.length();
	    int i=0;
	    while(i<n and S[i]=='1'){
	        i++;
	    }
	    if(i==n) return -1;
	    int cnt1=0,cnt2=0;
	    int ans=0;
	    while(i<n){
	        while(i<n and S[i]=='0'){
	            cnt1++;
	            i++;
	        }
	        ans=max(ans,cnt1-cnt2);
	        while(i<n and S[i]=='1'){
	            cnt2++;
	            i++;
	        }
	        ans=max(ans,cnt1-cnt2);
	        if(cnt1<cnt2){
	            cnt1=cnt2=0;
	        }
	    }
	    return ans;
	}
