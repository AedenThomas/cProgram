//Program to concatenate strings and show it's length

#include <stdio.h>
int main()
{
    char str1[50], str2[50], i, j;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    for (i = 0; str1[i] != '\0'; i++)
        ;
    for (j = 0; str2[j] != '\0'; j++, i++)
    {
        str1[i] = str2[j];
    }
    str1[i] = '\0';

    printf("The concatenated string is %s\n", str1);
    printf("The length of the concatenated string is %d\n", i);
}
