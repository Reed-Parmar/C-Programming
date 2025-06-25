#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t); // Read the number of test cases

    while (t--) {
        char str1[11], str2[11], str3[11];
        scanf("%s %s %s", str1, str2, str3); // Read the three strings
        printf("%c%c%c\n", str1[0], str2[0], str3[0]); // Print the concatenated first letters
    }

    return 0;
}