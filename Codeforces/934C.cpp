#include<bits/stdc++.h>
using namespace std;
int n,g[2010],a[2010],f[2010],ansn,sum1,sum2;
int main(){
	cin>>n;
	for (int i=1;i<=n;i++) cin>>a[i];

	for (int i=1;i<=n;i++) f[i]=f[i-1]+(a[i]==1);
	for(int i=1;i<=n;i++) cout<<f[i]<<endl;

	for (int i=n;i>=1;i--) g[i]=g[i+1]+(a[i]==2);
	cout<<endl;
	for(int i=1;i<=n;i++) cout<<g[i]<<endl;
	for (int i=1;i<=n+1;i++){
        ansn=max(ansn,f[i-1]+g[i]);
        cout<<f[i-1]<<" "<<g[i]<<" "<<ansn<<endl;
    }
	/*for (int p=1;p<=n+1;p++){
		sum1=0,sum2=0;
		for (int i=1;i<=p;i++) sum1=max(sum1,f[i-1]+g[i]-g[p]);
		for (int i=p;i<=n+1;i++) sum2=max(sum2,g[i]+f[i-1]-f[p-1]);
		ansn=max(ansn,sum1+sum2);
	}*/
	cout<<ansn<<endl;
	return 0;
}
