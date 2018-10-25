#include<bits/stdc++.h>

using namespace std;

bool  isLeapYear(int  year){
    if (year %  400  ==  0)  return  true;
    else  if(year  %  100  ==  0)  return  false;
    else  if(year  %  4  ==  0)  return  true;
    else  return  false;
}

int main(){
    int n;
    scanf("%d", &n);
    for(int tes = 1; tes <= n; tes++){
        int d1, m1, y1, y2, ans = 0;
        scanf("%d %d %d %d", &d1, &m1, &y1, &y2);
        if(m1 == 2 && d1 == 29){
            for(int i = y1 + 1; i <= y2; i++)
                if(isLeapYear(i)) ans++;
        }
        else ans = y2 - y1;
        printf("Case %d: %d\n", tes, ans);
    }

    return 0;
}
