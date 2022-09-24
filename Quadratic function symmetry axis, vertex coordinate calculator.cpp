#include <bits/stdc++.h>
using namespace std;
int main(void){

double a, b ,c,x,y1,y2,y;
printf("二次函数对称轴，顶点坐标计算器\n");
printf("请输入a，b，c，中间用空格隔开，例如：a b c \n");
printf("注意：如果是小数请输入时保留两位小数，输出时也保留两个小数 \n");
scanf("%lf%lf%lf",&a,&b,&c);
x=-b/2*a;
y1=4*a*c-b*b;
y2=4*a;
y=y1/y2;
printf("对称轴是：\n");
printf("%.2lf\n",x);
printf("顶点坐标是：\n");
printf("x是：\n");
printf("%.2lf\n",x);
printf("y是：\n");
printf("%.2lf\n",y);
// by mcsmallfeng
//github： https://github.com/mcsmallfeng/QFSAVCC
//gitee:https://gitee.com/mcsmallfeng/qfsavcc
  
  
  
  
  
  
  
  
  
    return 0;
}    

