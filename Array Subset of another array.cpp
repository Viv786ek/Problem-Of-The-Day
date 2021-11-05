string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int,int> s;
    for(int i=0;i<n;i++)
    s[a1[i]]++;
    for(int i=0;i<m;i++)
    {
        if(s[a2[i]]>0)
            s[a2[i]]--;
        else
        return "No";
    }
    return "Yes";
}
