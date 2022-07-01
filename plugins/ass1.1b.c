#include<stdio.h>
int main()
{
int a,b,sum,diff,pro;
float quo;
printf("enter the number");
scanf("%d%d", &a, &b);
sum= a+b;
diff= a-b;
pro= a*b;
quo= a/(float)b;
printf("\n sum=%d", sum);
printf("\n diff=%d", diff);
printf("\n pro=%d", pro);
printf("\n quo=%f", quo);
return 0;
}
