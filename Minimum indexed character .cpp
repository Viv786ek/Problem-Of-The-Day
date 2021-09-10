 int minIndexChar(string str, string patt)
    {
        // Your code hereuno
        unordered_map<char,int>m;
        for(auto x: patt){
            m[x]++;
        }
        
        for(int i=0;i<str.size();i++){
            if(m.find(str[i]) != m.end()){
                return i;
            }
        }
        return -1;
    }
