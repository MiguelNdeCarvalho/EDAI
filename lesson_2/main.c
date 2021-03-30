
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stackar.c"

int main(){
    char *str = "(1+2)9({}";

    printf("%d",ParentesisMatch(str));

    return 0;
}