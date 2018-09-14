#include<stdio.h>

int main()
{
    int a, sum = 0, i = 0;
printf("«Î ‰»Î≤Ω ˝£∫\n");

    while(1)
    {
        scanf("%d", &a);

        if(a == 0)
            break;
        if(i == 0)
        {
            sum += a;
            i = a;

        }
        else {
            if(i == 1)
            {
                sum += a;
                i = a;
            }
            else if(a == 1)
            {
                sum += a;
                i = a;
            }
            else{
                sum += (i+2);
                i += 2;
            }
        }

    }
    printf("%d\n", sum);

    return 0;
}

