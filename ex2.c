#include <stdio.h>

void reverse(char s[])
{
    int c,j;
    int i=0,k=0;
    while(s[k]!='\0')    
    {
        k++;
    }

    j=k-(i+1);

    for(i=0;i<j;i++,j--)
    {
        if(i<j)
        {
            c=s[i];
            s[i]=s[j];
            s[j]=c;
        }
    }
}
int main()
{
    printf("Please input:\n");
    char *s;
    scanf("%s",*&s);
    reverse(s);
    printf("%s\n",s);
    return 0;

}
