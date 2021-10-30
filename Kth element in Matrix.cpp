int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
  priority_queue<int> pq;
     for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           int x= mat[i][j];
       pq.push(x);
           if(pq.size()>k)
           {
               pq.pop();
           }
               
       }
   }
   return pq.top();
}
