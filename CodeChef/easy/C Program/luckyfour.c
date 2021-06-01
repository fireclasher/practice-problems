#include <stdio.h>
void main(){
    int n,t,c,r;scanf("%d",&t);
    while(t--){
            scanf("%d",&n);
            c=0;
            while(n>0){
                r=n%10;
                if(r==4){++c;}
                n=n/10;

            }
            printf("%d\n",c);
    }
}