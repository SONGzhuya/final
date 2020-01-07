#include <stdio.h>
#include <stdlib.h>

int main (int argc,char *argv[])
{
    int a[100];
    int i=1;
    int k=0;
    for(i=1;i<argc;i++,k++)
    {
        a[k]=atof(argv[i]);
    }

    int j;
    int min=a[0];
    for(j=0; j<argc-1; j++)
    {
        if(min > a[j])
        {
            min=a[j];
        }
    }
printf("Min parameter is %d\n", min);
return 0;
}
