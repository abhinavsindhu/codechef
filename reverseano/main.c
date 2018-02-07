#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no,rev=0,r,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&no);
        while(no>0)
        {
            r=no%10;
            rev=rev*10+r;
            no=no/10;
        }
        printf("%d\n",rev);
        rev=0;
    }
    return 0;
}
