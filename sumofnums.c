/*This is a program to find the sum of numbers divisible by 3 or 5 below 1000. This is a free program. You are free to
modify or redistribute it.

Author : Sajin M Prasad
email  : sajin_prasadkm@yahoo.co.in
*/

#include<stdio.h>
main()
{
	int sum=0,i;
	for(i=1;i<1000;i++)
 	      if(i%3==0||i%5==0)	
			sum+=i;
	printf("%d",sum);
}
