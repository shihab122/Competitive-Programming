#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;

double getPrm(double a, double b, double m){
    double alpha = atan(b / a) * 2.0;
    a *= m, b *= m;
    double d = sqrt(a * a + b * b);
    double prm = d * alpha + a * 2.0;
    return prm;

}

int main(){
    int t;
    cout<<fixed<<setprecision(7);
    scanf("%d", &t);
    for(int tes = 1; tes <= t; tes++){
        int a, b;
        scanf("%d : %d", &a, &b);
        double l = 0.0, r = 400.0, mid;
        for(int i = 0; i < 200; i++){
            mid = (l + r) / 2.00;
            if(getPrm(a, b, mid) >= 400) r = mid;
            else l = mid;
        }
        printf("Case %d: %.7lf %.7lf\n", tes, a * l, b * l);
    }


    return 0;
}
