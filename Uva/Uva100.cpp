#include<iostream>
using namespace std;

int main(){
    int i,j,c,s,x,y,l;
    while(cin>>i>>j){
        cout<<i<<" "<<j<<" ";
        c=0;
            if(i>j){
                int tmp;
                tmp=i;
                i=j;
                j=tmp;
            }
        for(int k=i;k<=j;k++)
        {
            s=1;
            for(int l=k;l!=1;l=l){
                if(l%2==0)
                    l=l/2;
                else
                    l=3*l+1;
                s++;
            }
                if(s>=c)
                    c=s;
        }
        cout<<c<<endl;
    }

    return 0;
}
