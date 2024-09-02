#include <stdio.h>
int main()
{
    int p1[3] = {2,9,4}; 
    for(int i=2;i>=0;i--)
    {
        printf("%dx^%d+",p1[i],i);
    }
}
