#include<iostream>

using namespace std;

int main(){
    int x,y,j=0,i=0,g=0,e=0;
loop1:
    while(1){
    cin>>x>>y;
    j++;
    if(x<y)
        g++;
    else if(x>y)
        i++;
    else
        e++;
loop2:
    cout<<"Novo grenal (1-sim 2-nao)"<<endl;
    int s;
    cin>>s;
    if(s==1)
        goto loop1;
    else if(s==2)
        break;
    else
        goto loop2;
    }
    cout<<j<<" grenais"<<endl;
    cout<<"Inter:"<<i<<endl;
    cout<<"Gremio:"<<g<<endl;
    cout<<"Empates:"<<e<<endl;
    if(i>g)
        cout<<"Inter venceu mais"<<endl;
    else if(i<g)
        cout<<"Gremio venceu mais"<<endl;
    else
        cout<<"Nao houve vencedor"<<endl;
    return 0;
}
