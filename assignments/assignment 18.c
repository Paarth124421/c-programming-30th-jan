#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    printf("Length of the string: %d\n", length);
    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    char str2[100];
    printf("\nEnter another string: ");
    scanf("%s", str2);
    int i = 0;
    while (str[i] != '\0' && str2[i] != '\0')
    {
        if (str[i] != str2[i]) {
            printf("The strings are not equal.\n");
            return 0;
        }
        i++;
    }
    if (str[i] == '\0' && str2[i] == '\0')
    {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }
    int isPalindrome = 1;
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }       
    char substr[100];
    printf("Enter a substring to search: ");
    scanf("%s", substr);
    int found = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        int j;
        for (j = 0; substr[j] != '\0'; j++) {
            if (str[i + j] != substr[j]) {
                break;
            }
        }
        if (substr[j] == '\0') {
            found = 1;
            break;
        }
    }
    if (found) {
        printf("Substring found in the string.\n");
    } else {
        printf("Substring not found in the string.\n");

    }
    return 0;
}
