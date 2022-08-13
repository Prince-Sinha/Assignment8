#include<stdio.h>
int main(){
     int i,j;
     for(i=1;i<=13;i++){
        for(j=1;j<=19;j++){
            if(i<=3 && ((j>=4-i && j<=6+i)||(j>=14-i && j<=16+i)))
                printf("*");
            else if(i==4 && (j<=6||(j>=8 && j<=14)))
                printf("*");
            else if(i==4 && (j==7))
               printf("MySirG");
            else if(i>4 && (j>=i-3&&j<=23-i))  
                 printf("*");
              
            else
               printf(" ");
        }
        printf("\n");
     }
    return 0;
}