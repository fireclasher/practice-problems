#include<stdio.h>
#include<stdlib.h>
void main(){
    int i,n,*ptr,n1,n2;
    printf("Enter size of array");
    scanf("%d",&n1);
    ptr= (int*) malloc(n1*sizeof(int));
    printf("Address of Allocated memory:\n");
    for(i=0;i<n1;++i){
        printf("%u\n",ptr+i);
    }
    printf("Enter size of new array:");
    scanf("%d",&n2);
    ptr=realloc(ptr,(n1+n2)*sizeof(int));
    printf("Address of Allocated memory:\n");
    for(i=0;i<n2;++i){
        printf("%u\n",ptr+i);

    }
    free(ptr);

}