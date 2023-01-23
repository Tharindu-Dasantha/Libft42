/* |----------------------------------------------------------| */
/* |       ##      ## ## ##      Created By:- Tharindu        | */
/* |      ##  \school\   ##                                   | */
/* |     ## ##           ##      Date started:- 2023.01.10    | */
/* |    ##  ##     ## ## ##      Date uploded:- 0000.00.00    | */
/* |  ## ## ## ##  ##                                         | */
/* |        ##     ##            Topic:-                      | */
/* |        ##     ## ## ##      This is libft                | */
/* |----------------------------------------------------------| */

int ft_isalpha (char s) {
    // takes char as a arg then check is it a alphabertical one or not
    char simple[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char capital[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'}; 
    // checks the numbers
    for (int i = 0; i < 26; i++) {
        //checking capital
        if (capital[i] == s) {
            return 1;
        }
        // checking for simple letters
        else if (simple[i] == s) {
            return 2;
        }
    }
    return 0;
}