#include<bits/stdc++.h>

using namespace std;

int decim(int sum){
    while(sum/10!=0) sum=(sum%10)+(sum/10);
    return sum;
}

int main(){
  //  freopen("in.txt","w",stdout);
    string a;
    int sum1=0;
    int c=1;
    while(getline(cin,a)){
        int sum2=0;
        for(int i=0;i<a.size();i++)
            if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z')){
                if((a[i]>='A'&&a[i]<='Z')) a[i]+=32;
                sum2+=a[i]-96;
                sum2=decim(sum2);
            }
        if(c%2==0){
//            cout<<"yes"<<endl;
            float mn,mx;
            mn=min(sum1,sum2);
            mx=max(sum1,sum2);
        //    cout<<mn<<" "<<mx<<endl;
            float ans=(mn*100)/mx;
            //float ans2=(mx*100)/mn;
//            ans=min(ans,ans2);
            printf("%.2f %\n",ans);
        }
        else
            sum1=sum2;
        c++;
    }
    return 0;
}
