#include<stdio.h>
int main(){
     int i,j;
     for(i=1;i<=5;i++){
        for(j=1;j<=9;j++){
            if(i==1 && (j>=2 && j<=8))
                printf("*");
            else if(j==i || j==10-i) 
                printf("*");        
            else
               printf(" ");
        }
        printf("\n");
     }
    return 0;
}