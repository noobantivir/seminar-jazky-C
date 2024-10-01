#include <stdio.h>

// vždycky musí být funkce main, kam se píšou další operace
int main()
{
    //1. úkol
    float priklad = 3/2.0 + 12 + (5*5 - 2*2)/6.0;
//-----------------------------------------
    //2. úkol
    int a = 2, b = 2, c = 0, d = 1, e = 4;
    a++ / b-- * d++; //výsledek bude: a =
    printf("hodnota a je %d, hodnota b je %d , hodnota d je %d \n", a, b, d );

    a = 2; b = 2; c = 0; d = 1; e = 4;
    b-- * c++ + e; //výsledek bude: 
    printf("hodnota b je %d, hodnota c je %d , hodnota e je %d \n", b, c, e);

    a = 2; b = 2; c = 0; d = 1; e = 4;
    -b + c--; //výsledek bude:
    printf("výsledek je %f \n", priklad);
    return 0;
}