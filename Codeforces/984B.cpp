#include<bits/stdc++.h>

using namespace std;
int r [] ={1,1,1,0,0,-1,-1,-1};
int c [] ={-1,0,1,-1,1,-1,0,1};
int main(){
    vector<string>vc;
    char ch;
    int n,m;
    scanf("%d %d",&n,&m);
    string s;
    scanf("%c",&ch);
    for(int i=0;i<n;i++){
        getline(cin,s);
        vc.push_back(s);
        //scanf("%c",&ch);
    }
    //for(int i=0;i<vc.size();i++) cout<<vc[i]<<endl;
    for(int i=0;i<vc.size();i++){
        for(int j=0;j<m;j++){
            if(vc[i][j]=='.'){
                for(int x=0;x<8;x++){
                    int row = i+r[x];
                    int col = j+c[x];
                    if(row>=0 && row<n && col>=0 && col<m){
                        if(vc[row][col]=='*'){
                            printf("NO\n");
                            return 0;
                        }
                    }
                }
            }
            else if(vc[i][j]!='*'){
                int cnt=0;
                int num =vc[i][j]-'0';
                for(int x=0;x<8;x++){
                    int row = i+r[x];
                    int col = j+c[x];
                    if(row>=0 && row<n && col>=0 && col<m){
                        if(vc[row][col]=='*') cnt++;
                    }
                }
                if(cnt!=num){
                    printf("NO\n");
                    return 0;
                }
            }
        }
    }
    printf("YES\n");

    return 0;
}
