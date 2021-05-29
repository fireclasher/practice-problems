#include<stdio.h>
int main(){
    int n,k,t[50],count;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;++i){
        scanf("%d",&t[i]);
        if(t[i]%k==0)
        count++;
    }
    printf("%d",count);
    return 0;

}