#include "libft.h"

int main(void) {
    char *in;
    printf("Type an sentence:");
    scanf("%c", &in);
    int num;
    printf("how many chars:");
    scanf("%i", num);
    ft_bzero(in, num);
    return 0;
}