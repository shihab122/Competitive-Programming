#include<bits/stdc++.h>

using namespace std;

int main(){
    //cout<<fixed;
    //cout<<setprecision(10);
    int t;
    double pi = acos(-1);
    scanf("%d",&t);
    for(int i = 1;i <= t;i++){
        double R;
        int n;
        scanf("%lf %d", &R, &n);
        double theta = sin(pi/n);
        double area = (R * (theta)) / (1 + theta);

/*
        double r;
        int n;
        scanf("%lf %d",&r,&n);
        double area = (1/sin(pi/n));
        area += 1;
        area = r/area;
*/
        printf("Case %d: %.10lf\n",i,area);
    }

    return 0;
}
