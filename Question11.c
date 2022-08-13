#include<stdio.h>
int main(){
     int i,j;
     char ch;
     for(i=1;i<=4;i++){
           ch=64;
        for(j=1;j<=7;j++){
            if(j>=5-i && j<=4){
                    ch++; 
                    printf("%c",ch);          
            }
            else if(j>4 && j<=3+i){
                  --ch;
                printf("%c",ch);
            }
            else
               printf(" ");
        }
        printf("\n");
     }
    return 0;
}