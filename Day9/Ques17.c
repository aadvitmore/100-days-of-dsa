#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i, j;
    char temp;

    printf("Problem: A secret system stores code names in forward order. To display them in mirror format, you must transform the given code name so that its characters appear in the opposite order.\n");
    printf("Input:\n- Single line: a lowercase string containing only alphabetic characters (no spaces)\n");
    printf("Output:\n- Print the transformed code name after applying the mirror operation\n");
    printf("Example:\nInput:\nhello\nOutput:\nolleh\n");
    printf("Explanation: The first character moves to the last position, the second to the second-last, and so on until the entire string is mirrored\n\n");

    printf("Enter code name: ");
    scanf("%s", str);

    len = strlen(str);
    i = 0;
    j = len - 1;

    while(i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("%s\n", str);

    return 0;
}