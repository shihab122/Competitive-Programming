#include<bits/stdc++.h>

using namespace std;

int main(){
    string a,b;
    cin>>a;
    b=a;
    int y=0,j=b.size()-1;
    for(int i=0;i<a.size();i++){
        if(i>=j)
            break;
        if(b[j]!=a[i]) y++;
        j--;
    }
    if(y==0&&a[j]==b[j]&&b.size()%2!=0)
        cout<<"YES"<<endl;
    else if(y==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}

/*    string a,b;
    cin>>a;
    b=a;
    for(int i=0;i<a.size();i++){
        string c,d;
        for(int j=0;j<a.size();j++){
            if(j!=i){
                c.push_back(a[j]);
            }
        }
        d=c;
        reverse(d.begin(),d.end());
        cout<<d<<" "<<c<<endl;
        if(c==d){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}*/
