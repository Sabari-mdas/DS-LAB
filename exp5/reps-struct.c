#include <stdio.h>
struct poly
{
    int coeff;
    int exp;
};

int main()
{
    struct poly p1[3];
    p1[0].coeff = 7; p1[0].exp = 2; 
    p1[1].coeff = 3; p1[1].exp = 1; 
    p1[2].coeff = 9; p1[2].exp = 0; 
    for(int i=0;i<3;i++)
    {
        printf("%dx^%d+",p1[i].coeff,p1[i].exp);
    }

}
