 int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>> p;
       for(int i=0;i<n;i++){
           p.push_back({start[i],end[i]});
       }
       sort(p.begin(),p.end());
       int count=0;
       int l=-1;
       
       for(auto i : p){
           if(i.first > l){
               count++;
               l=i.second;
           }
           else if(i.second < l){
               l=i.second;
           }
       }
       return count;
    }
