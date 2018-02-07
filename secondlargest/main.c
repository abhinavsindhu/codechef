#include <stdio.h>
#include <stdlib.h>

int main()
{long int n1,n2,n3,a,b,c,sl,t;

scanf("%d",&t);
while(t--)
{
scanf("%ld",&n1);
scanf("%ld",&n2);
scanf("%ld",&n3);
a=n1;
b=n2;
c=n3;
sl=a;
if(sl>b)
    {
      sl=b;
        if(sl>c)
        {
            sl=c;
            printf("%ld\n",sl);
        }
        else
         printf("%ld\n",sl);
    }
else
   {
       sl=b;
       if(sl>c)
        {
             sl=c;
             printf("%ld\n",sl);
        }
       else
        printf("%ld\n",sl);
   }


}

return 0;
          }
