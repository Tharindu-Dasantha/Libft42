#include <stdio.h>
#include "libft.h" 

int main() {
    char str[] = "42";
    int result = ft_atoi(str);
    printf("The converted integer is: %d\n", result);
    return 0;
}