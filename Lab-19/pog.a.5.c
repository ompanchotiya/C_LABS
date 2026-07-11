#include <stdio.h>
void replaceChar(char str[], char oldCh, char newCh) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == oldCh) {
            str[i] = newCh;  
        }
        i++;
    }
}

int main() {
    char str[100];
    char oldCh, newCh;

    printf("Enter a string: ");
    gets(str);   

    printf("Enter character to replace: ");
    scanf("%c", &oldCh);

    printf("Enter new character: ");
    scanf(" %c", &newCh); 

    replaceChar(str, oldCh, newCh);

    printf("Updated string: %s\n", str);

    return 0;
}
