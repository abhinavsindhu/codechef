#include <stdio.h>


int main()
{
    int a,b,c,s,t;
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
         }
         else
         {
             s=c;
         }
       else
         {
             s=a;

         }

    }
    else
    {
        if(b>c)
          if(a>c)
            {

             s=a;
            }
          else
          {

             s=c;
          }

        else
           {

           s=b;
           }
    }
    printf("%d \n",s);
 }
    return 0;
}
