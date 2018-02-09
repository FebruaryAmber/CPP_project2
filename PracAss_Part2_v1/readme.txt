#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

main()
{
 int a,b,c,d;
 printf("请输入4个整数：");
 scanf("%d%d%d%d",&a,&b,&c,&d);
 if(a > b) swap(&a, &b);
 if(a > c) swap(&a, &c);
 if(a > d) swap(&a, &d);
 if(b > c) swap(&b, &c);
 if(b > d) swap(&b, &d);
 if(c > d) swap(&c, &d);
 printf("%d %d %d %d\n", a, b, c, d);
}