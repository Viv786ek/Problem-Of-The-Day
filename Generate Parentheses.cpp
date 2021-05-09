 void solve(int n,string s,int open,int close,vector<string>&res)
{
    if(open>n || close>n || close>open)
    return;
    if(s.length()==2*n && open==close)
    res.push_back(s);
    solve(n,s+'(',open+1,close,res);
    solve(n,s+')',open,close+1,res);
}
vector<string> AllParenthesis(int n) 
{
    vector<string>res;
    string s="";
    solve(n,s,0,0,res);
    return res;
}
