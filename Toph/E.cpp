#include<bits/stdc++.h>

using namespace std;

int binarysearch(vector<int>arr,int n,int number){
    int left=0,right=n-1;
    int index=-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==number){
            index=mid;
            left=mid+1;
        }
        else if(arr[mid]<number) left=mid+1;
        else if(arr[mid]>number) right=mid-1;
    }
    return index;
}

int main(){
    int n,f=0,gt=0;
    scanf("%d",&n);
    vector<int>vc;
    while(n--){
        gt=0;
        int a,b;
        scanf("%d %d",&a,&b);
        if(a==1) vc.push_back(b);
        else if(vc.size()==0) printf("Sorry\n");
            else{
                    for(int i=vc.size()-1;i>=0;i--){
                        if(vc[i]==b){
                            int ans=vc.size()-i;
                            printf("%d\n",ans);
                            vc.resize(i);
                        //cout<<vc.size()<<endl;
                            gt=1;
                            break;
                        }
                    }
                   if(gt==0) printf("Sorry\n");
                    //ans=(vc.size()-ans)-1;

        }
    }

    return 0;
}
