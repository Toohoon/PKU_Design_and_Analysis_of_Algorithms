#include<iostream>
using namespace std;
int n=4;
int V[100]={0,12,11,9,8};
int W[100]={0,8,6,4,3};
int B=13;
struct binary_tree{
    int Value;
    int Weight;
    binary_tree *Left;
    binary_tree *Right;  
    binary_tree(int a,int b):Value(a),Weight(b){}
};
//void BT_Function(binary_tree A, int K);
void BT_Function(binary_tree *A, int K){
    if(A->Weight>=B||K>n){
        cout<<A->Value<<'/'<<A->Weight<<endl;
        return ;
    }
    A->Left=new binary_tree(A->Value+V[K],A->Weight+W[K]);
    BT_Function(A->Left, K+1);
    A->Right=new binary_tree(A->Value,A->Weight);
    BT_Function(A->Right,K+1);

}
int main(){
    binary_tree *root=new binary_tree(0,0);
    BT_Function(root, 1);  
    return 0;
}