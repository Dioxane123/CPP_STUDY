#include<stdio.h>
int main(){
    unsigned int a = 0xDDDDEEEE;
    unsigned short int *pm = (unsigned short int*)&a;
    printf("*pm=%X\n", *(pm+1));
    return 0; 
}

