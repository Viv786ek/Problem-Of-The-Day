 int getCount(int N) {
        // code here
        double a;
int n=2,c=0;

while(2*N - n*n + n > 0)
{
if( (2*N + n - n*n) % (2*n) == 0)
c++;

n+=1;
}
return c;

    }
