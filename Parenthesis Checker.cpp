bool ispar(string x)
    {
        // Your code here
        stack<char> S;
        
        for(char it : x)
        {
            if(it == '(' or it == '{' or it == '[')
            S.push(it);
            
            else
            {
                if(it == ')')
                {
                    if(S.empty() or S.top() != '(')
                    return false;
                }
                
                if(it == '}')
                {
                    if(S.empty() or S.top() != '{')
                    return false;
                }
                
                if(it == ']')
                {
                    if(S.empty() or S.top() != '[')
                    return false;
                }
                
                S.pop();
            }
        }
        
        return S.empty();
    }
