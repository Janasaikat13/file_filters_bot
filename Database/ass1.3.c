#include<stdio.h>
#include<math.h>
int main()
{
float x,y,s,c;
printf("enter angle in degree.\n");
scanf("%f",&x);
y=((22.0/(7*180))*x);
s=sin(y);
c=cos(y);
printf("sin(%0.1f)=%0.2f\n",x,s);
printf("cos(%0.1f)=%0.2f\n",x,c);
return 0;
}
