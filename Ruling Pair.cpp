int get(int x){
        int ans=0;
        while(x){
            ans+=x%10;
            x/=10;
        }
        return ans;
    }
    int RulingPair(vector<int> arr, int n) 
    {   
        unordered_map<int,int> mp;
        int ans=-1;
        for(int x:arr){
            int digitSum=get(x);
            	if(mp.find(digitSum)!=mp.end()){
                	ans=max(ans,mp[digitSum]+x);
                	mp[digitSum]=max(mp[digitSum],x);
            	}else{
                	mp[digitSum]=x;
            }
        }
        return ans;
    	// Your code goes here
    } 
