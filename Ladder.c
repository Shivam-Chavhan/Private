#include <stdio.h>
int main(){

    float percentage ;

    printf("\n Enter your percentage");
    scanf("%f",&percentage);

    if(percentage>=0 && percentage<33){
        printf("/n Failed");
    }
    else  if(percentage>=33 && percentage<50){
        printf("/n Grade D");
    }
        else  if(percentage>=50 && percentage<60){
        printf("/n Grade c");
    }
        else  if(percentage>=60 && percentage<70){
        printf("/n Grade B");
    }
        else  if(percentage>=70 && percentage<80){
        printf("/n Grade A");
        
    }
        else  if(percentage>=80 && percentage<100){
        printf("/n Grade A+");
    }
        else {
        printf("/n Invalid Input");
    }
}