#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  a  = 10;
    int *p1 = NULL;
    int *p2; 
    int mat [3][3];

    printf("&a = %p, a = %d\n", &a, a);
    printf("&p1 = %p, p1 = %d\n", &p1, p1);
    printf("&p2 = %p, p2 = %d\n\n", &p2, p2);

    *p1=*p2;
    *p2=20;
    *p1=a+*p2;

    printf("&a = %p, a = %d\n", &a, a);
    printf("&p1 = %p, *p1 = %d\n\n", &p1, p1);
    
    printf("mat = %d", mat);

    return 0;
    
}