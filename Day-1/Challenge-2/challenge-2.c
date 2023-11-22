#include <stdio.h>
#include <string.h>


void switchVariable(char *str1, char *str2)
{
    char temp[strlen(str1)];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

int main()
{
    // declear the variable a and b
    char a[100], b[100];

    // prompt the user to enter a value
    printf("Enter a value to be stored in variable \"a\": ");
    scanf("%s", &a);

    printf("Enter a value to be stored in variable \"b\": ");
    scanf("%s", &b);

    printf("\nInitial values\n a = %s\n b = %s\n", a, b);

    switchVariable(a, b);

    printf("\nSwitched value\na = %s\n b = %s\n", a, b);

    return 0;
}