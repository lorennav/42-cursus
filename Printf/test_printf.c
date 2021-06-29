# include "ft_printf.h"
int main(void)
{
    printf("-----WIDTH------\n");
    printf("Hi testing printf %5d\n", 45);
    printf("Hi testing printf %3d\n", 45);
    printf("Hi testing printf %045d\n", 45);
    printf("Hi testing printf %0*d\n", 5, 45);
    return (0);
}