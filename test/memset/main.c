#include "libft.h"
#include <stdio.h>

// gcc -I ../../includes main.c ../../libft.a

int main(void)
{
    char hello[] = "hello world";

    printf("%s\n", hello);
    memset(hello, 'a', sizeof(hello));
    printf("%s\n", hello);
    return (0);
}