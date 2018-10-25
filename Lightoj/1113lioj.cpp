#include<bits/stdc++.h>

using namespace std;

int main(){
    //freopen("in.txt","w",stdout);
    int t;
    scanf("%d", &t);
    for(int tes = 1; tes <= t; tes++){
        printf("Case %d:\n", tes);
        string a, b, cur;
        stack<string> ba, fo;
        cur = "http://www.lightoj.com/";
        while(cin>>a){
            if(a == "QUIT") break;
            if(a[0] == 'V'){
                string c;
                cin>>c;
                ba.push(cur);
                cur = c;
                cout<<cur<<endl;
                while(!fo.empty()) fo.pop();
            }
            else if(a[0] == 'B'){
                if(ba.empty()) printf("Ignored\n");
                else{
                    fo.push(cur);
                    cur  = ba.top();
                    ba.pop();
                    cout<<cur<<endl;
                }
            }
            else{
                if(fo.empty()) printf("Ignored\n");
                else{
                    ba.push(cur);
                    cur  = fo.top();
                    fo.pop();
                    cout<<cur<<endl;
                }
            }
        }
    }

    return 0;
}
