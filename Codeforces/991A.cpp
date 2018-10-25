#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


int main(){
    int a, b, c, n;
    scanf("%d %d %d %d", &a, &b, &c, &n);
    int x = a + b;
    int y = (a + b) - c;
    if(a >= n || b >= n || c >= n || a < c || b < c) printf("-1\n");
    else if(y >= n) printf("-1\n");
    else if(x < c) printf("-1\n");
    else printf("%d\n", n-y);



    return 0;
}
