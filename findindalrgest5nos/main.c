#include <stdio.h>

int main()
{
    int a=0,b=0,c=0,d=0,e=0;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a>b&&a>c&&a>d&&a>e)
     printf("%d",a);
    if(b>a&&b>c&&b>d&&b>e)
     printf("%d",b);
    if(c>a&&c>b&&c>d&&c>e)
     printf("%d",c);
    if(d>a&&d>b&&d>c&&d>e)
     printf("%d",d);
    if(e>a&&e>b&&e>c&&e>d)
     printf("%d",e);
    return 0;
    }
