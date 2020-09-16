#include<stdio.h>
int main()
{
    int n, i, p = 0, N = 0, z = 0;
    float neg = 0.0, pos = 0.0, zero = 0.0;
    int number;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
       scanf("%d", &number);
       if(number > 0)
            p += 1;

        else if(number < 0)
            N += 1;

       else
           z += 1;

    }


    pos = (float)p/n;
    neg = (float)N/n;
    zero = (float)z/n;

    printf("%.6f\n%.6f\n%.6f\n", pos, neg, zero);

    return 0;
}
