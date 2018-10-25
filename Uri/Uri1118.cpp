#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double X,sum=0;
    int i=0;
    cout<<fixed<<setprecision(2);
loop1:
    while(1){
        cin>>X;
        if(X<0||X>10)
            cout<<"nota invalida"<<endl;
        else{
            sum+=X;
            i++;
            if(i%2==0){
                cout<<"media = "<<sum/2<<endl;
                sum=0;
    loop2:
                    cout<<"novo calculo (1-sim 2-nao)"<<endl;
                    int j;
                    cin>>j;
                    if(j==2)
                        break;
                    else if(j==1)
                        goto loop1;
                    else
                        goto loop2;
                }
            }
        }

    return 0;
}
