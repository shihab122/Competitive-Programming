#include<bits/stdc++.h>
using namespace std;
int main ()
{
  long long a,n,s=0,k=0;
    scanf("%I64d",&n);
  for(long long i=0;i<n;i++)
  {
     scanf("%I64d",&a);
    if(a%2&&!s){
        s=1;
        k=1;
    }
  }
  if(!k)puts("Second");
  else puts("First");
  return 0;
}
