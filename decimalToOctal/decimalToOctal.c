#include <stdio.h>
#include <math.h>

int convertDecToOctal(int dec)
{
    int octal = 0, i = 1;

    while (dec != 0)        //checking if quotient is zero
    {
        octal =octal+ (dec % 8) * i;    //remainders in reverse order
        dec /= 8;
        i = i*10; 
    }
    return octal;
}

int main()
{
    int dec;

    printf("Enter a decimal number: ");
    scanf("%d", &dec);

    printf("%d in Decimal is %d in Octal \n", dec, convertDecToOctal(dec));

    return 0;
}
