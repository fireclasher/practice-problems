#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void calculate_the_maximum(int n, int k) {
int i,j,maxand=0,maxor=0,maxxor=0;
for(i=1;i<=n;i++){
    for(j=i+1;j<=n;j++){
        if(((i&j)<k)&&((i&j)>maxand))
            maxand=i&j;
        if(((i|j)<k)&&((i|j)>maxor))
            maxor=i|j;
        if(((i^j)<k)&&((i^j)>maxxor))
            maxxor=i^j;}}
        
printf("%d\n",maxand);
printf("%d\n",maxor);
printf("%d\n",maxxor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
