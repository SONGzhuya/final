#include<stdio.h>
void reverse(char *m){
    char a=*m;

    if(a){
        reverse(m=m+1);
    }
printf("%c",a);
}
int main(){
    char*s="good good study,day day up!";
    reverse(s);
    printf("\n");
return 0;
}