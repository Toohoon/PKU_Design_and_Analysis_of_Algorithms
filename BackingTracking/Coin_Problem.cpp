#include<iostream>
using namespace std;
int n=4;
int V[100]={0,12,11,9,8};
int W[100]={0,8,6,4,3};
int B=13;
int F[1000][1000]={0};
int main(){
    for(int i=1;i<=B;i++){
        //F[1][i]=(i/W[1])*V[1];
        F[1][i]=0;
        if(i>=W[1]){
            F[1][i]=V[1];
        }
    }
    for(int k=2;k<=n;k++){
        for(int y=1;y<=B;y++){
            int Det=F[k-1][y];
            if(y>=W[k]){
                Det=max(F[k-1][y],
                V[k]+F[k-1][y-W[k]]);
            }
            F[k][y]=Det;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=B;j++){
            cout<<F[i][j]<<' ';
        }cout<<endl;
    }
}
