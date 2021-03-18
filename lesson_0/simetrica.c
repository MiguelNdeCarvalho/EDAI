#include <stdio.h>

int simetrica(int matriz[][5], int sz)
{
    for (int l = 0; l < sz; l++)
    {
        for (int c  = 0; c < sz; c++)
        {
            if(matriz[l,c] != matriz[c,l])
                return 0;
        }
        
    }
    return 1;
}

int simetrica_optimized(int matriz[][5], int sz)
{
    for (int l = 0; l < sz; l++)
    {
        for (int c  = l+1; c < sz; c++)
        {
            if(matriz[l,c] != matriz[c,l])
                return 0;
        }
        
    }
    return 1;
}


int main(int argc, char const *argv[])
{
    
    return 0;
}