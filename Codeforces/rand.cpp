#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n,q;

void read(LL &x)
{
	x=0;LL f=1;char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
	x*=f;
}



int main()
{
	 read(n);read(q);
	 while(q--)
	 {
	 	LL x,y;LL s=0;
	 	read(x);read(y);
	 	if((x+y)&1)
	 	{
	 		if(n&1)s+=n*n/2+1;
	 		else s+=n*n/2;
	 		if(x&1)s+=(x-1)*n/2+y/2;
	 		else s+=(n/2)+(x-2)*n/2+(y+1)/2;
	 		printf("%I64d\n",s);
		}
	 	else
		{
			if(x&1)s=(x-1)*n/2+(y+1)/2;
			else s=((n+1)/2)+(x-2)*n/2+y/2;
			printf("%I64d\n",s);
		}

	 }
	return 0;
}
