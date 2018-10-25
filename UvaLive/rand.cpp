#include<bits/stdc++.h>
using namespace std;

#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define PI acos(-1.0)

#define MOD 1000000007
#define MX 100000

struct node{
    int lft, rgt;
    node()
    {
        lft=rgt=-1;
    }
};
node tree[3500000];
int nodeNum;

void Insrt(int x)
{
    int pos=0, bit;
    for(int i=31;i>=0;i--)
    {
        bit = (x & (1<<i));
        if(bit)
        {
            if(tree[pos].rgt==-1)
            {
                tree[pos].rgt=++nodeNum;
                tree[nodeNum]=node();
            }
            pos=tree[pos].rgt;
        }
        else
        {
           if(tree[pos].lft==-1)
            {
                tree[pos].lft=++nodeNum;
                tree[nodeNum]=node();
            }
            pos=tree[pos].lft;
        }
    }
return;
}

int Qry(int x)
{
    int pos=0, bit, res=0;
    for(int i=31;i>=0;i--)
    {
        bit = (x & (1<<i));
        if(bit)
        {
            if(tree[pos].lft!=-1)
            {
                res |= (1<<i);
                pos = tree[pos].lft;
            }
            else pos=tree[pos].rgt;
        }
        else
        {
           if(tree[pos].rgt!=-1)
            {
                res |= (1<<i);
                pos=tree[pos].rgt;
            }
            else pos=tree[pos].lft;
        }
    }
return res;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    freopen("in2.txt","w",stdout);
    int tc, kk=1, n, x, cumxor, mx;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        nodeNum=mx=cumxor=0;

        tree[0] = node();
        Insrt(0);
        for(int i=0;i<n;i++)
        {
            cin>>x;
            cumxor=cumxor^x;
            mx=max(mx, Qry(cumxor));
            //cout<<Qry(cumxor)<<endl;
            Insrt(cumxor);
        }
        cout<<mx<<"\n";
    }

return 0;
}
