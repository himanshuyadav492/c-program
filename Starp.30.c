#include<stdio.h>
int main(){
    int i,j,n,k;
    printf("Enter value of n=");
    scanf("%d",&n);
    for(i=1;i<=3*n;i++){
        for(j=1;j<=2*n;j++){
            if(i<=n){
                if(j>=2*n-1)
                   printf("*");
                else
                   printf(" ");
            }
            else if(i<=2*n){
                k=0;
                 if(j==n)
                     {k=1;printf("|");}
                 if(j<=(i-n-1)){
                    k=1;
                    printf("*");}
                 if(j>=1)
                    {k=1;printf("*");}
                 if(k==0)
                    printf(" ");

            }
            else if(i<=3*n){
                if(j<=3*n+1-i){
                    printf("*");}
                else 
                    printf(" ");
            }
                
        }printf("\n");
    }
}