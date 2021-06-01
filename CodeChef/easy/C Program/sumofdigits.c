#include <stdio.h>
int main(){
    int t,sum=0,i,inp;
    scanf("%d",&t);
    for(i=0;i<t;++i)
        {   
            scanf("%d",inp);
            while(inp>0)
            {
                sum+=inp%10;
                inp=inp/10;
            }
            printf("%d",sum);
        }
}