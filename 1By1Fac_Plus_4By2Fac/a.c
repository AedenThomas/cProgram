

#include <stdio.h> 
#include<math.h>

int main()
{
    int n, sum = 0, k = 1;

    printf("enter the number\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int j = 1;
        k = k * i;
        sum += (pow(i, j)) / (k);
        j++;
    }

    printf("%d", sum);
    return 0;
}

