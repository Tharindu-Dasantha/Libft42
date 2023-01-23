/* |----------------------------------------------------------| */
/* |       ##      ## ## ##      Created By:-                 | */
/* |      ##  \school\   ##                                   | */
/* |     ## ##           ##      Date started:- 0000.00.00    | */
/* |    ##  ##     ## ## ##      Date uploded:- 0000.00.00    | */
/* |  ## ## ## ##  ##                                         | */
/* |        ##     ##            Topic:-                      | */
/* |        ##     ## ## ##      This is libft                | */
/* |----------------------------------------------------------| */


int ft_isdigit (char s) {
    // checking if a char is a digit or not 
    char numbers[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    // the same thing can be done using ascii numbers 48 to 57 but i'm tring to do this without using a single library 
    for (int i = 0; i < 10; i++) {
        if (numbers[i] == s) {
            return 1;
        }
    }
    return 0;
}