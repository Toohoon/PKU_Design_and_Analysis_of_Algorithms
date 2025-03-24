# PKU_Design_and_Analysis_of_Algorithms
回溯（BT） VS 动态规划（DP）
问题：
0-1 背包问题
n=4
价值: V={12,11,9,8}
重量: W={8,6,4,3}
B=13

DP:
F(n)(y) 表示运行到第n步、B=y时的最大值
即： F(n)(y)=max{ F(n-1)(y) , F(n-1)(y-W[n])+V[n] }


