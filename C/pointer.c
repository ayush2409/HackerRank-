#include<stdio.h>
void update(int *a,int *b)
{
    int temp = *a;
    *a = *a + *b;
    *b = temp - *b;

    if(*b < 0)
 {
        *b = -(*b);
    }
}

int main() 
{
    int a, b;
    int *p1 = &a, *p2 = &b;

   scanf("%d%d",&a,&b);
    update(p1, p2);
    printf("%d",a);
    printf("\n%d",b);

    return 0;
}
