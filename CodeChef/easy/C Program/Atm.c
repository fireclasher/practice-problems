#include <stdio.h>
void main()
{
    int x,y;
    scanf(" %f %f",&x,&y);
    if(x%5==0 && x+0.50<y)
    { y-=x+0.50;}
    printf("%.2f",y);
}