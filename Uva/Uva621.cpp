#include<bits/stdc++.h>

using namespace std;

int main(){
    string a;
    int t;
    scanf("%d", &t);
    while(t--){
        cin>>a;
        if(a == "1" || a == "4" || a == "78")
            printf("+\n");

        else if(a.size() >= 2 && a[a.size() - 1] == '5' && a[a.size() - 2] == '3')
            printf("-\n");

        else if(a.size() > 2 && a[0] == '1' && a[1] == '9' && a[2] == '0')
            printf("?\n");

        else
            printf("*\n");
    }

    return 0;
}
