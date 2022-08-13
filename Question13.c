#include<stdio.h>
int main(){
     int i,j;
     char ch;
     for(i=1;i<=7;i++){
           ch='A';
        for(j=1;j<=13;j++){
            if(j<=8-i){
                    printf("%c",ch); 
                    ch++;         
            }
            else if(j>=6+i && j<=13){
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