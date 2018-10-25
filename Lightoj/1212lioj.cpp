#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    for(int tes = 1; tes <= t; tes++){
        int sz, op;
        scanf("%d %d", &sz, &op);
        deque<int> dq;
        printf("Case %d:\n", tes);
        for(int i = 0; i < op; i++){
            string str;
            cin>>str;
            if(str == "pushLeft"){
                int x;
                scanf("%d", &x);
                if(dq.size() == sz) printf("The queue is full\n");
                else{
                    dq.push_front(x);
                    printf("Pushed in left: %d\n", x);
                }
            }
            else if(str == "pushRight"){
                int x;
                scanf("%d", &x);
                if(dq.size() == sz) printf("The queue is full\n");
                else{
                    dq.push_back(x);
                    printf("Pushed in right: %d\n", x);
                }
            }
            else if(str == "popRight"){
                int x;
                if(dq.size() == 0) printf("The queue is empty\n");
                else{
                    x = dq.back();
                    dq.pop_back();
                    printf("Popped from right: %d\n", x);
                }
            }
            else{
                int x;
                if(dq.size() == 0) printf("The queue is empty\n");
                else{
                    x = dq.front();
                    dq.pop_front();
                    printf("Popped from left: %d\n", x);
                }
            }
        }
    }


    return 0;
}
