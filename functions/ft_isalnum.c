/* |----------------------------------------------------------| */
/* |       ##      ## ## ##      Created By:- Tharindu        | */
/* |      ##  \school\   ##                                   | */
/* |     ## ##           ##      Date started:- 2023.01.10    | */
/* |    ##  ##     ## ## ##      Date uploded:- 0000.00.00    | */
/* |  ## ## ## ##  ##                                         | */
/* |        ##     ##            Topic:-                      | */
/* |        ##     ## ## ##      This is libft                | */
/* |----------------------------------------------------------| */


int ft_isalnum (char s) {
    // checks a-z,A-Z,0-9
    char simple[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char capital[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char numbers[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    // now checks the letters
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
    // checking the numbers
    for (int j = 0; j < 10; j++) {
        // checking the numbers
        if (numbers[j] == s) {
            return 3;
        }
    }
    return 0;
}