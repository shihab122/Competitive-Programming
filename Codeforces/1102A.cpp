#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


int main(){

    ll n;
    scanf("%lld", &n);
    n--;
    if((n / 2) & 1) printf("0\n");
    else printf("1\n");

    return 0;
}
