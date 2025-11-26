#include <stdio.h>
int main() 
{
    int n, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    do 
	{
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    } 
	while (n > 0);
    printf("sum = %d", sum);
    return 0;
}
