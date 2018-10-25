#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    getchar();
    for(int i=0;i<n;i++){
        char arr[1001],arr1[1001];
        gets(arr);
        int c=strlen(arr);
        for(int i=0;i<c;i++){
            if((arr[i]>='A' && arr[i]<='Z') || (arr[i]>='a'&& arr[i]<='z')){
                arr[i]=arr[i]+3;
            }
        }
        int p=0;
        for(int i=c-1;i>=0;i--){
            arr1[p]=arr[i];
            p++;
        }
        arr1[p] = '\0';
        int l=c/2;
        for(int i=l;i<c;i++){
            arr1[i]=arr1[i]-1;
        }
        cout<<arr1<<endl;
    }
    return 0;
}
