#include <stdio.h>

// vždycky musí být funkce main, kam se píšou další operace
int main()
{
    //1. úkol
    float priklad = 3/2.0 + 12 + (5*5 - 2*2)/6.0;
//-----------------------------------------
    //2. úkol
    int a = 2, b = 2, c = 0, d = 1, e = 4;
    a++ / b-- * d++; //výsledek bude: 
    printf("hodnota a je %d, hodnota b je %d , hodnota d je %d", a, b, d);

    a = 2; b = 2; c = 0; d = 1; e = 4;
    b-- * c++ + e; //výsledek bude: 
    printf("hodnota b je %d, hodnota c je %d , hodnota e je %d", b, c, e);

    printf("výsledek je %d", priklad);
    return 0;
}