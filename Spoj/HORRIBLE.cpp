#include <bits/stdc++.h>
using namespace std;
struct{
    long long sum=0,prop=0; // prop is the lazy propagation of the node
}tree[3*100000+10];
void init(int node,int low,int high)
{
    if(low==high)
    {
        tree[node].sum=0;
        tree[node].prop=0;
        return;
    }
    int left=node*2,right=node*2+1,mid=(low+high)/2;
    init(left,low,mid);
    init(right,mid+1,high);
    tree[node].sum=0;
    tree[node].prop=0;
}
void update(int node,int low,int high,int a,int b,long long V)
{
    if(a>high||b<low) return; // out of range
    if(low>=a&&high<=b) // find a range
    {
        tree[node].sum=tree[node].sum+(high-low+1)*V;
        tree[node].prop=tree[node].prop+V;
        return;
    }
    int left=node*2,right=node*2+1,mid=(low+high)/2;
    update(left,low,mid,a,b,V);
    update(right,mid+1,high,a,b,V);
    tree[node].sum=tree[left].sum+tree[right].sum+(high-low+1)*tree[node].prop;
}
long long query(int node,int low,int high,int a,int b,long long carry)
{
    if(a>high||b<low) return 0; // out of range
    if(low>=a&&high<=b) // find a range
    {
        return tree[node].sum+carry*(high-low+1);
    }
    int left=node*2,right=node*2+1,mid=(low+high)/2;
    long long p1 = query(left,low,mid,a,b,carry+tree[node].prop);
    long long p2 = query(right,mid+1,high,a,b,carry+tree[node].prop);
    return  p1+p2;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int N,Q; // N is the number of indexes of an array and Q is the number of query
        scanf("%d%d",&N,&Q);
        init(1,1,N); // Build Segment Tree . Initially all indexes of the array contains 0 .
        while(Q--)
        {
            int direction;
            scanf("%d",&direction); // If direction is 0 than add a integer in a range . If direction is 1 than return sum of a range
            if(direction==0)
            {
                int index1,index2,V; // add integer V in array from every index1 to index2
                scanf("%d%d%d",&index1,&index2,&V);
                update(1,1,N,index1,index2,V);
            }
            else
            {
                int index1,index2;
                scanf("%d%d",&index1,&index2); // return summation from the index1 to index2 in array
                printf("%lld\n",query(1,1,N,index1,index2,0));
            }
        }
    }
    return 0;
}
