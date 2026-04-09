#include <stdio.h>

int main() {
    FILE *src, *dest;
    char source[] = "/workspaces/c-programming-30th-jan/assignments/a.txt";
    char destination[] = "/workspaces/c-programming-30th-jan/assignments/b.txt";

    src = fopen(source, "r");
    if (src == NULL) { 
        printf("Error opening source file.\n");
        return 1;
    }

    dest = fopen(destination, "w"); 
    if (dest == NULL) { 
        printf("Error opening destination file.\n");
        fclose(src);
        return 1;
    }

    char ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully.\n");

    fclose(src);
    fclose(dest);

    return 0;
}