 string convert(string s, int n) {
        //code
        if(n == 1)
            return s;
        map<int,string> mp;
        string res = "";
        for(int i = 0; i < n ; i ++){
            mp[i] = "";
        }
        int i = 0;
        int j = 0;
        while(i < s.length()){
            while(j <= n - 1 and i < s.length()){
                string t = mp[j];
                t += s[i];
                mp[j] = t;
                if(j == n - 1) break;
                j++;i++;
            }
            j--;i++;
            while(j >= 0 and i < s.length()){
                string t = mp[j];
                t += s[i];
                mp[j] = t;
                if(j == 0) break;
                j--;i++;
            }
            j++;i++;
        }
        for(auto i : mp){
            res += i.second;
        }
        return res;
        
    }
