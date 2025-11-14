#include<stdio.h>
int main()
{
    printf("***This string lenght founder***\n");
    char string[100];
    printf("Enter any staring :");
    gets(string);
    int length = 0;
    int *p;
    p = &length;

    for (int i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
    printf("the length of string is : %d" , *p);
    return 0;
    

    return 0;
}