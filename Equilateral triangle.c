#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>=10&&a<=20){
        printf("Equilateral triangle");
    }
    else{
        printf("not equilateral triangle");
        return 0;
    }
}