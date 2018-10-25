#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


int main(){
    int n, m;
    string a, b;
    scanf("%d %d", &n, &m);
    cin>>a;
    cin>>b;
    int k = a.find('*');
    cout<<k<<endl;
    for(int i = 0; i < n; i++){
        if(a[i] == '*') break;
        else if(a[i] != b[i]){
            printf("NO\n");
            return 0;
        }
        a[i] = ' ';
        b[i] = ' ';
    }
    n--, m--;
    while(1){
        if(n < 0 || a[n] == '*') break;
        if(a[n] != b[m]){
            printf("NO\n");
            return 0;
        }
        n--, m--;
    }
    while(m >= 0){
        if(b[m] == ' ') break;
        if(b[m] < 'a' || b[m] > 'z'){
            printf("NO\n");
            return 0;
        }
        m--;
    }
    printf("YES\n");

    return 0;
}
