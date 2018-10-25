#include<bits/stdc++.h>

using namespace std;

int main(){
//freopen("in.txt","w",stdout);
    int n;
    scanf("%d",&n);
    while(1){
        vector<string>vc;
        vc.clear();
        map<string,int> arr;
        for(int i=0;i<n;i++){
            string a;
            cin>>a;
            vc.push_back(a);
            arr[a]=0;
        }

        for(int i=0;i<n;i++){
            string a;
            int b,c;
            cin>>a>>b>>c;
            if(c==0) continue;
            b/=c;
            arr[a]-=b*c;
            for(int j=0;j<c;j++){
                string d;
                cin>>d;
                arr[d]+=b;
     //       cout<<d<<" "<<arr[d]<<endl;
            }
        }
        for(int i=0;i<vc.size();i++) cout<<vc[i]<<" "<<arr[vc[i]]<<endl;
        if(cin>>n) cout<<endl;
        else break;
}
    return 0;
}
