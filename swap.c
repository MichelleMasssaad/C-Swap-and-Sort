#include<stdio.h>
#include<string.h>


int main(){

    char x = 'X';
    char y = 'Y';
    char temp;


    temp=x;
    x=y;
    y=temp;

    printf("x = %c\n", x);
    printf("y = %c\n", y);


    char z [15] = "water";
    char w[15] = "lemonade";
    char tempo[15];

    strcpy(tempo,z);
    strcpy(z , w);
    strcpy(w , tempo);


    printf("z= %s\n" , z);
    printf(" w = %s\n" , w);


    return 0;
    
}

