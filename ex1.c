#include <stdio.h>
int main()
{
    double a,b,c;
    printf("please input the two number :\n");
    scanf("%lf%lf",&a,&b);
    c=((a+b)*(a+b));
    printf("The result is:%1.2lf\n",c);
    return 0;
}