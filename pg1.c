#include<stdio.h>
int main(){
    int i,j,n=5;
    for(i=1;i<=n;i++){
        for(j=5;j>=n-i+j;j--)
        {
            if((i==j)||(n==i+j-1))
            {
                printf("%d",j);
            }
            else
            {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
}
