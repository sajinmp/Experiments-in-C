#include<stdio.h>
#include<string.h>
main()
{
	char a[100],b[100];
	int c,d,e,f=0,g,h,i,j,k,l,m,n;
	printf("Enter the string : ");
	gets(a);
	printf("\nEnter the string to search : ");
	gets(b);
	c=strlen(a);
	d=strlen(b);
	i=0;
	while(i<c)
	{
		k=i;
		j=0;
		while(a[k]==b[j])
		{
			if(j==(d-1))
			{
				f=1;
				e=k;
				goto A;
			}
			k++;
			j++;
		}
		i++;
	}
A:
	if(f==1)
	{
		printf("\nSearch successfull.");
		for(k=e-d+1;k<c;k++)
			a[k]=a[k+d];
		printf("Deleted String \n");
		for(i=0;i<c-d+1;i++)
			printf("%c",a[i]);
		printf("\n");
	}
	else
		printf("Search fails");
}
