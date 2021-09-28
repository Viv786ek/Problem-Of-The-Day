void SortedStack :: sort()
{
   //Your code here
   vector<int>v;
   while(!s.empty()){
       v.push_back(s.top());
       s.pop();
   }
   ::sort(v.begin(),v.end());
   
   for(int i=0;i<v.size();i++){
       s.push(v[i]);
   }
   
   
}
