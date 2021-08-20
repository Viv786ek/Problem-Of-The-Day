string longestPalindrome(string s){
        // code here 
        vector<vector<bool>> string_map(s.size(), vector<bool>(s.size(),false));
        string ans = "";
        int str_len = 0;
        
        int i = 0;
        while(i < s.size()){
        
            string_map[i][i] = true;
            
            int curr_len = 1;
            if(curr_len > str_len){
                str_len = curr_len;
                ans = s.substr(i, str_len);
            }
            
            i++;
        
        }
        
        i=0;
        while(i<s.size()-1){
            
            if(s[i] == s[i+1]){
                
                string_map[i][i+1] = true;
                
                int curr_len = 2;
                if(curr_len > str_len){
                    str_len = curr_len;
                    ans = s.substr(i,str_len);
                }
                
            }
            
            i++;
            
        }
        
        
        int k = 2; 
        int j = k;
        while(k<s.size()){
            
            i=0;
            j=k;
            while(i<s.size()-k){
                
                if(s[i] == s[j] && string_map[i+1][j-1]){
                    
                    string_map[i][j] = true;
                    
                    int curr_len = k+1;
                    if(curr_len > str_len){
                        str_len = curr_len;
                        ans = s.substr(i, str_len);
                    }
                    
                }
                
                i++;
                j++;
                
            }
            
            k++;
        }
        
        return ans;
    }
