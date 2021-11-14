int countRev (string s)
{
    // your code here
     int n=s.size();
   if(n%2!=0){
       return -1;
   }
   int op=0,cl=0,count=0;
   for(int i=0;i<n;i++){
       if(cl>op){
           cl--;op++;
           count++;
       }
       if(s[i]=='{'){
           op++;
       }
       else if(s[i]=='}'){
           cl++;
       }
   }
   op-=cl;
   count+=op/2;
   return count;
}
