#include<bits/stdc++.h>

using namespace std;

int main(){
    string a,b;
    int t;
    //vector<int>mn,mx;
    deque<int>dq;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        cin>>a>>b;
        if(a=="Insert"){
            int x;
            scanf("%d",&x);
            if(b=="Back"){
                dq.push_back(x);
            }

            else{
                dq.push_front(x);
            }
        }
        if(a=="Erase"){
            if(b=="Back"){
                dq.pop_back();
            }

            else{
                dq.pop_front();
            }
        }
        if(a=="Get"){
            if(b=="Back"){
                deque<int>::iterator it = dq.end()-1;
                printf("%d\n",*it);

            }

            else if(b=="Front"){
                 deque<int>::iterator it1 = dq.begin();
                printf("%d\n",*it1);

            }

            else if(b=="Min"){
                int tu=*min_element(dq.begin(),dq.end());
                printf("%d\n",tu);
            }

            else{
                int tu=*max_element(dq.begin(),dq.end());
                printf("%d\n",tu);
            }
        }

    }

    return 0;
}
