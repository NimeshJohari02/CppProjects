#include <stdio.h>
long int decimal_to_binary(int n)
{
long int binary = 0;
int remainder, i, flag = 1;
for(i = 1; n != 0; i = i * 10)
{
remainder = n % 2;
n /= 2;
binary += remainder * i;
}
return binary;
}
int main()
{
int n;
printf("Enter a decimal number: ");
scanf("%d", &n);
printf("Equivalent binary number: %u\n", decimal_to_binary(n));
return 0;
}
