#include <stdio.h>


int main()
{
    int a,b,c,s,l,t;
    scanf("%d",&t);
  while(t--)

 {
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
       if(a>c)
         if(b>c)
         {
             s=b;
             l=a;
         }
         else
         {
             s=c;
             l=a;
         }
       else
         {
             s=a;
             l=c;
         }

    }
    else
    {
        if(b>c)
          if(a>c)
            {
             l=b;
             s=a;
            }
          else
          {
             l=b;
             s=c;
          }

        else
           {
           l=c;
           s=b;
           }
    }
    printf("%d %d\n",l,s);
 }
    return 0;
}
