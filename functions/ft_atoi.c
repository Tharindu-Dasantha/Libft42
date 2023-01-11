/* |----------------------------------------------------------| */
/* |       ##      ## ## ##      Created By:-                 | */
/* |      ##  \school\   ##                                   | */
/* |     ## ##           ##      Date started:- 0000.00.00    | */
/* |    ##  ##     ## ## ##      Date uploded:- 0000.00.00    | */
/* |  ## ## ## ##  ##                                         | */
/* |        ##     ##            Topic:-                      | */
/* |        ##     ## ## ##      This is libft                | */
/* |----------------------------------------------------------| */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"
int ft_atoi(const char *str)
{
    int res = 0;
    int sign = 1;

    while(*str == 32 || (*str >= 8 && *str <= 13))
    *str++;
    if(*str == '+')
    *str++;
    if(*str == '-')
    {
      sign = -1;
      *str++;
    }
    while(*str >= '1' && *str <= '9')
     res = res * 10 + (*str++ - '0');
    return res*sign;
}
int main(int argc, char *argv[])
{
    printf("mine:%d\n",ft_atoi(argv[1]));
    return 0;
}