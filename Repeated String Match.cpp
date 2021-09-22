int repeatedStringMatch(string A, string B) 
    {
        // Your code goes here
         int cnt=1;
       
       //copy of string a
       string s=A;
       
       while(s.size() < B.size())
       {
           s+=A;
           cnt++;
       }
       //check if B is a substring
       if(s.find(B)!=string::npos)
       {
           return cnt;
       }
       
       //add 1 more and then check again if B is a substring
       s+=A;
       if(s.find(B)!=string::npos)
       {
           return cnt+1;
       }
       return -1;
    }
