#include <stdio.h>
int main()
{
    int X;
    scanf("%d",&X);
    if(X>=100&&X<=999){
        printf("Three-digit number");
    }
    else
    printf("not three-digit number");
    return 0;
}