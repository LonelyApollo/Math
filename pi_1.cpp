#include <stdio.h>
#include <math.h>
int main()
{
    int f;
    float n;
    float t,pi;
    t=1;pi=t;n=1.0;

    while(fabs(t)>=1e-6)
    {
        n=n+2;
        f=-f;
        t=f/n;
        pi=pi+t;

    }
    
    pi=pi*4;
    printf("pi=%10.6f\n",pi);
    
    return 0;
}
