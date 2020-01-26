#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, d , e, f, g, h;
    scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);

    b = b * c;
    d = d * e;

    b /= g;
    f /= h;
    d = min(d, min(b, f));
    d /= a;

    printf("%d\n", d);

    return 0;
}
