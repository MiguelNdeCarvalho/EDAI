#include "stdio.h"

void ordena( int *a, int *b, int *c )
{
    int array[3] = {*a, *b, *c};
    int temp;
    for (int i=0; i < 3; i++) {
        for (int j=0; j < 2; j++) {
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    
    printf("%d %d %d", array[0], array[1], array[2]);
}

int main()
{
    int value1, value2, value3;
    printf("Insert the values: ");
    scanf("%d %d %d", &value1,&value2,&value3);
    ordena(&value1, &value2, &value3);
    

    return 0;
}