#include<iostream>
using namespace std;
int Func[100][100];
int i[100][100];
int y;
int n;
int Value[100];
int Weight[100];
int main(){
    n=4;
    y=12;
    Value[1]=1;Value[2]=4;Value[3]=6;Value[4]=8;
    Weight[1]=1;Weight[2]=2;Weight[3]=4;Weight[4]=6;
    for(int a=0;a<=y;a++){
        Func[1][a]=(a/Value[1])*Weight[1];
        //i[1][a]=a/Value[1];
        i[1][a]=1;
    }
    for(int k=2;k<=n;k++){
        for(int a=1;a<=y;a++){
            Func[k][a]=Func[k-1][a];
            i[k][a]=i[k-1][a];
            if(a>=Value[k]){
                int Num_of_K =a/Value[k];
                int Weight_of_K=Num_of_K*Weight[k];
                if((Weight_of_K+Func[k-1][a-Num_of_K*Value[k]])<=Func[k-1][a]){
                    Func[k][a]=Weight_of_K+Func[k-1][a-Num_of_K*Value[k]];
                    i[k][a]=k;
                }
            }
        }
    }
    for(int a=1;a<=n;a++){
        for(int b=1;b<=y;b++){ 
            cout<<Func[a][b]<<' ';
        }cout<<endl;
    }
    cout<<endl;
    for(int a=1;a<=n;a++){
        for(int b=1;b<=y;b++){
            cout<<i[a][b]<<' ';
        }cout<<endl;
    }
}