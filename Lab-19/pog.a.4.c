#include <stdio.h>
int findChar(char str[], char ch) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ch) {
            return i;  
        }
        i++;
    }
    return -1;
}  

int main() {
    char str[100], ch;
    int pos;

    printf("Enter a string: ");
    gets(str);  

    printf("Enter a character to find: ");
    scanf("%c", &ch);

    pos = findChar(str, ch);

    if (pos == -1) {
        printf("Character '%c' not found in the string.\n", ch);
    } else {
        printf("Character '%c' found at position %d.\n", ch, pos);
    }

    return 0;
}
