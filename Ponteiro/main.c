#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int a = 10;
    int *p1 = NULL;
    int *p2;

    setlocale(LC_ALL, "Portuguese");

    printf("&a = %p, a = %d\n", &a, a);
    printf("&p1 = %p1, p1 = %p\n", &p1, p1);
    printf("&p2 = %p2, p2 = %p\n", &p2, p2);

    p1 = &a;
    p2 = p1;
    *p2 = 4;

    printf("\n");

    printf("&a = %p, a = %d\n", &a, a);
    printf("&p1 = %p1, p1 = %p, *p1 = %d\n", &p1, p1, *p1);
    printf("&p2 = %p2, p2 = %p, *p2 = %d\n", &p2, p2, *p2);


    return 0;
}
