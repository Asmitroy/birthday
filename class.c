#include <stdio.h>
#include <string.h>

int main() {
    char str[100], str1[100];
    int n, i;

    printf("Enter a string:\n");
    scanf("%s", str);

    n = strlen(str);

    // Reverse the string
    for (i = 0; i < n; i++) {
        str1[i] = str[n - i - 1];
    }
    str1[n] = '\0'; // Null-terminate the reversed string

    // Check if the original string matches the reversed string
    if (strcmp(str, str1) == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
