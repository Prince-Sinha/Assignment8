#include<stdio.h>
int main(){
     int i,j;
     for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(i==1 && (j>=2 && j<=4))
                printf("* ");
            else if(j==i || j==5) 
                printf("* ");        
            else
               printf("  ");
        }
        printf("\n");
     }
    return 0;
}