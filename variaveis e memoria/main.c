#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int a = 10;
    int b, c;

    setlocale(LC_ALL, "Portuguese");
    printf("&a = %p, a = %d \n", &a, a);
    printf("&b = %p, b = %d \n", &b, b);
    printf("&c = %p, c = %d \n\n", &c, c);

    b = 20;
    c = a + b;

    printf("&a = %p, a = %d \n", &a, a);
    printf("&b = %p, b = %d \n", &b, b);
    printf("&c = %p, c = %d \n\n", &c, c);

    return 0;
}
