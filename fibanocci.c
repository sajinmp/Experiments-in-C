#include<stdio.h>
main()
{
    long a=0,b=1,c,n=4000000,sum=0,i;
    for(i=1;a+b<n;i++)
       {
           c=a+b;
           if(c%2==0)
               sum+=c;
           a=b;
           b=c;
       }
    printf("%d",sum);
}
