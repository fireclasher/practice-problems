#include <stdio.h>
#include<stdlib.h>
void main(){
    int n,i,*ptr,sum=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    ptr = (int*)calloc(n*sizeof(int));
    if(ptr==NULL){
        printf("unallocated");
        exit(0);
    }
    for(i=0;i<n;++i){
        printf("enter  variable %d:",i+1);
        scanf("%d",(ptr+i));
        sum+=*(ptr+i);
        
    }
    free(ptr);
    printf("\n sum=%d",sum);
    
}