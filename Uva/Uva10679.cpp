#include<bits/stdc++.h>

using namespace std;

int main(){
    int k;
    scanf("%d",&k);
    while(k--){
        string s;
        cin>>s;
        int t;
        scanf("%d",&t);
        for(int i=0;i<t;i++){
            string c;
            cin>>c;
            if(strstr(s.c_str(),c.c_str()))
            {
               printf("y\n");
            }
            else printf("n\n");
        }
    }

    return 0;
}
