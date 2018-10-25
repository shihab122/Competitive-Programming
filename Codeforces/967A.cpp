#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n,ss,flag=0;
    scanf("%d %d",&n,&ss);
    int s=(ss*2)+1;
    int fm=0,fh=0,arr[n+1],arr1[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i]>>arr1[i];
    }
    int x=0,y=0;
    for(int i=0;i<n;i++){
        int h=arr[i],m=arr1[i];
        if(i==0){
            y = (ss+1)%60;
            x = (ss+1)/60;
            if(x < h){
                printf("0 0\n");
                return 0;
            }
            else if(x == h && y <= m){
                printf("0 0\n");
                return 0;
            }
         }
        else{
            int lol=0;
            if(m < y){
                lol += 60 - y;
                lol += m;
                x++;
            }
            else{
                lol += m - y;
            }
            lol += (h - x)*60;
            if(lol >= s){
                printf("%d %d\n",arr[i-1]+(arr1[i-1]+ss+1)/60,(arr1[i-1]+ss+1)%60);
                return 0;
            }
        }
        y = (m+1)%60;
        x = h+(m+1)/60;
    }
    x += (y+ss)/60;
    y = (y+ss)%60;
    printf("%d %d\n",x,y);
    return 0;
}
