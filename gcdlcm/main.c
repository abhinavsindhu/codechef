#include<stdio.h>
void gcdlcm(long int a,long int b)
{
    long int r,gcd,lcm,x,y;
    x=a;
    y=b;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;

    }
    gcd=a;
    lcm=x*y/gcd;
printf("%ld %ld\n",gcd,lcm);
}

int main()
{
   long int t,n1,n2;
   scanf("%ld",&t);


   while(t)
   {   scanf("%ld %ld",&n1,&n2);
       gcdlcm(n1,n2);
       --t;
   }

    return 0;
}
