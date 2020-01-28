#include <cstdio>
#include <iostream>
using namespace std;
#define mx 100
#define inf 10000000
int LIS[mx],seq[mx],sol[mx];
int solve(int N)
{
    int idx[mx];
    for(int i=1;i<=N;i++) idx[i]=inf;
    idx[0]=-inf;
    int lislength=0;
    for(int i=1;i<=N;i++)
    {
        //Binary Search
        int low = 0 , high = lislength ;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(idx[mid]<seq[i]) low = mid+1;
            else high = mid-1;
        }
        idx[low]=min(seq[i],idx[low]);
        cout<<low<<endl;
        LIS[i]=low;
        lislength=max(lislength,low);
    }
    return lislength;
}
void printSolution(int N,int lis)
{
    int temp = lis;
    while(N>0)
    {
        if(LIS[N]==temp)
        {
            sol[temp--]=seq[N];
        }
        N--;
    }
    for(int i=1;i<=lis;i++) printf("%d ",sol[i]);
}
int main()
{
    int N; // N is the number of elements
    scanf("%d",&N);
    for(int i=1;i<=N;i++) scanf("%d",&seq[i]);
    int ans = solve(N);
    printf("%d\n",ans);
    //for(int i=0;i<=ans;i++) cout<<LIS[i]<<" ";
    cout<<endl;
    printSolution(N,ans);
    return 0;
}
