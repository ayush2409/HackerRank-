#include <iostream>
using namespace std;

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

    cin>>a>>b;
    update(p1, p2);
    cout<<a<<"\n"<<b;

    return 0;
}
