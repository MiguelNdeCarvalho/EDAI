#include <stdio.h>

int main ()
{
    int var1=5;
    char var2='a';
    int *ptr1= &var1;
    char *ptr2= &var2;
    *ptr2='b';
    printf("var1 tem o endereço %p e o valor %d\n", ptr1, var1 );
    printf("var2 tem o endereço %p e o valor %c\n", ptr2, var2 );
    printf("Tamanho do char: %ld Tamanho do char*: %ld\n", sizeof(char), sizeof(char*));
    printf("Tamanho do int: %ld Tamanho do int*: %ld\n", sizeof(int), sizeof(int*));
    printf("Valor de ptr1: %d e o valor de ptr2: %d\n", ptr1, ptr2);
    printf("Valor de ptr1+1: %d e o valor de ptr2+1: %d\n", ptr1 + 1, ptr2 + 1);
}