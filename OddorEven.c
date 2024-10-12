#include<stdio.h>
#include<stdlib.h>
int main()
{
    int number;
    scanf("%d", &number);
    if(number <= 0)
    {
        if(number == 0) puts("Zero");
        else puts("Negative number");
        exit(EXIT_SUCCESS);
    }
    printf("%s", number % 2 == 0 ? "Even" : "Odd");

    return 0;
}