#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;
    int is_pal = 1;

    printf("Problem: Read a string and check if it is a palindrome using two-pointer comparison.\n");
    printf("Input:\n- Single line: string s\n");
    printf("Output:\n- Print YES if palindrome, otherwise NO\n");
    printf("Example:\nInput:\nlevel\nOutput:\nYES\n");
    printf("Explanation: String reads same forwards and backwards\n\n");

    printf("Enter string: ");
    scanf("%s", str);

    len = strlen(str);
    i = 0;
    j = len - 1;

    while(i < j) {
        if(str[i] != str[j]) {
            is_pal = 0;
            break;
        }
        i++;
        j--;
    }

    if(is_pal) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
