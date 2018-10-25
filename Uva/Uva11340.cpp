#include<bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cout<<fixed<<setprecision(2);
    while(cin>>N){
        while(N--){
            int k;
            cin>>k;
            vector<char>a;
            vector<double>r;
            for(int i=0;i<k;i++){
                char b;
                double c;
                cin>>b>>c;
                a.push_back(b);
                r.push_back(c/100);
            }
            int M;
            cin>>M;
            vector<string>d;
            getchar();
            for(int i=0;i<M;i++){
                string t="";
                getline(cin,t);
                d.push_back(t);
            }
            double sum=0;
            for(int i=0;i<d.size();i++){
                for(int j=0;j<a.size();j++){
                int u=count(d[i].begin(),d[i].end(),a[j]);
                sum+=u*r[j];
                }
            }
            cout<<sum<<"$"<<endl;
        }
    }
    return 0;
}
