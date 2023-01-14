/* |----------------------------------------------------------| */
/* |       ##      ## ## ##      Created By:- Tharindu        | */
/* |      ##  \school\   ##                                   | */
/* |     ## ##           ##      Date started:- 2023.01.03    | */
/* |    ##  ##     ## ## ##      Date uploded:- 0000.00.00    | */
/* |  ## ## ## ##  ##                                         | */
/* |        ##     ##            Topic:- bzero                | */
/* |        ##     ## ## ##      This is libft                | */
/* |----------------------------------------------------------| */


#include "libft.h"


void ft_bzero(void *s, size_t n) {
    unsigned char *new = (unsigned char *) s;
    printf("%c", &s);
    printf("%i", n);
    printf("%c", new);
    printf("\n");
}