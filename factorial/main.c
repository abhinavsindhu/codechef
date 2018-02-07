#include <stdio.h>


int main()
{
    int t,n;
    unsigned long long int f=1;
    scanf("%d",&t);
    while(t--)
    {    f=1;
        scanf("%d",&n);
        while(n>0)
        {
            f=f*n;
            n--;
        }
        printf("%llu\n",f);
    }
    return 0;
}
