#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n,cnt=1;
    scanf("%d",&n);
    int arr[n+10];
    vector<int>vc[n+10];
    for(int i=2;i<=n;i++){
        int a;
        scanf("%d",&a);
        vc[i].push_back(a);
        vc[a].push_back(i);
    }
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    queue<int>qu;
    qu.push(1);
    bool bl[n+10]={false};
    while(qu.size()!=0){
        int q=qu.front();
        qu.pop();
        bl[q]=true;
        for(int i=0;i<vc[q].size();i++){
            int x=vc[q][i];
            if(bl[x]==false){
                if(arr[x]!=arr[q]){
                    cnt++;
                }
                    qu.push(x);
            }

        }
    }
    printf("%d\n",cnt);
    return 0;
}
