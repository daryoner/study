#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, p = 1, k = 0;

    printf("Enter the natural numbers A and B: ");
    scanf("%d%d", &a, &b);

    printf("Numbers that are multiples of A and B, less than A*B: ");
    while(p<a*b)
    {
        if(p%a==0 && p%b==0)
        {
            printf("%d ", p);
            k = 1;
        }
        p++;
    }
    if(!k) printf("There are no numbers that satisfy the condition.");
    return 0;
}