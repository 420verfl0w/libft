#include "libft.h"
#include <unistd.h>

// https://gcc.gnu.org/onlinedocs/gcc/Local-Register-Variables.html#Local-Register-Variables
// https://gcc.gnu.org/onlinedocs/gcc/Extended-Asm.html#Clobbers-and-Scratch-Registers
// https://gcc.gnu.org/onlinedocs/gcc/Extended-Asm.html#Extended-Asm
// https://gcc.gnu.org/onlinedocs/gcc/Extended-Asm.html#InputOperands
// gcc -I ../../includes main.c ../../libft.a

void    ft_putstr(char *str)
{
    char    *tmp;

    tmp = str;
    while (*tmp)
        tmp++;
    write(1, str, tmp - str);
}

void * ft_assembly_memset(void * d, int s, size_t c )
{
	__asm__ volatile (
		"rep stosb"
		:"=d"(d),"=c"(c)
		:"0"(d),"a"(s),"1"(c)
	);
	return (d);
}

int main(void)
{
	char hello[0x100] = "hello world";
	ft_assembly_memset(hello, 'a', 1);
	ft_memset(hello, 'a', 2);
	ft_putstr(hello);
	return (0);
}