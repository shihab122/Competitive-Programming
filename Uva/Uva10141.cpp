#include<bits/stdc++.h>

using namespace std;

struct iii{
    string a;
    double amount;
    int cn;
};

bool cmp(iii A,iii B){
    if(A.cn!=B.cn) return A.cn<B.cn;
    else if(A.amount!=B.amount) return A.amount>B.amount;
    else return true;
}

int main(){
    freopen("in.txt","r",stdin);
    int n,p,cnt=0;
    string separator="";
    while(scanf("%d%d",&n,&p)){
        if(n==0&&p==0) break;
        cout<<separator;
        separator="\n";
        vector<iii>prop;
  //      getchar();
        cin.ignore();
        for(int i=0;i<n;i++){
            string a;
          //  cin.ignore();
            getline(cin,a);
        }
//        getchar();
        for(int i=0;i<p;i++){
            string a2;
            double d2;
            int c2,am=0;
            getline(cin,a2);
            cin>>d2>>c2;
    //            getchar();
            cin.ignore();
            for(int j=0;j<c2;j++){
                string a3;
                getline(cin,a3);
            }
          iii ii;
            ii.a=a2;
            ii.amount=d2;
            ii.cn=c2;
            prop.push_back(ii);
        }
        sort(prop.begin(),prop.end(),cmp);
        cout<<"RFP #"<<++cnt<<endl;
        cout<<prop[p-1].a<<endl;
    }

    return 0;
}
