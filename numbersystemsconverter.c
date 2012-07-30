/* This is a program to find the sum of even numbers of fibanocci series upto a limit of 4 million. 

You are free to edit modify or redistribute this program.

Author  :  Sajin M Prasad
Email   :  sajin_prasadkm@yahoo.co.in
*/

#include<string.h>
#include<stdio.h>
#include<math.h>
int b2d(int bn)
{
	int dn=0,i=0,n,r;
	n=bn;
	while(n)
	{
		r=n%10;
		dn+=r*pow(2,i);
		n=n/10;
		i++;
	}
	return dn;
}
main()
{
	int ch;
	char ans;
	A:
		system("clear");
		printf("\n\n\n\t\t\t\tCONVERTER\n\n\t\t\t  1. Binary to Decimal\n\n\t\t\t  2. Binary to Octal\n\n\t\t\t  3. Binary to Hexa");
		printf("\n\n\t\t\t  4. Hexa to Binary\n\n\t\t\t  5. Octal to Binary\n\n\t\t\t  6. Decimal to Binary\n\n\t\t\t  7. Exit");
		printf("\n\n\n\t Enter your option : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 :  system("clear");
				  int bn,dn;
				  printf("\n\n\t\tEnter the binary number : ");
				  scanf("%d",&bn);
				  dn=b2d(bn);	
				  printf("\n\n\t\tThe decimal number of binary number %d is %d",bn,dn);
				  break;
			case 2 :  system("clear");
				  int b,d,o=0,r,i=0;
                                  printf("\n\n\t\tEnter the binary number : ");
				  scanf("%d",&b);
				  d=b2d(b);
				  while(d)
				  {
				  	r=d%8;
					o+=r*pow(10,i);
					d=d/8;
					i++;
				  }
				  printf("\n\n\t\tThe octal of binary number %d is %d",b,o);
				  break;
			case 3 :  system("clear");
				  int j,bd,n,hd[100];
				  i=0;
				  printf("\n\n\t\tEnter the binary number : ");
				  scanf("%d",&bd);	
				  printf("\n\n\t\tThe hexa of the binary number %d is ",bd);
				  n=bd;
				  while(n)
				  {
				  	r=n%10000;
					switch(r)
					{
						case 0 :	hd[i]=0;
								break;
						case 1 :	hd[i]=1;
								break;
						case 10 : 	hd[i]=2;
								break;
						case 11 : 	hd[i]=3;
								break;
						case 100 :	hd[i]=4;
								break;
						case 101 :	hd[i]=5;
								break;
						case 110 :	hd[i]=6;
								break;
						case 111 :	hd[i]=7;
								break;
						case 1000 :	hd[i]=8;
								break;
						case 1001 :	hd[i]=9;
								break;
						case 1010 :	hd[i]=10;
								break;
						case 1011 :	hd[i]=11;
								break;
						case 1100 :	hd[i]=12;
								break;
						case 1101 :	hd[i]=13;
								break;
						case 1110 :	hd[i]=14;
								break;
						case 1111 :	hd[i]=15;
								break;
					}
					n=n/10000;
					i++;
				  }
				  for(j=i-1;j>=0;j--)
				  {
				  	switch(hd[j])
					{
						case 0 :  printf("0");
							  break;
						case 1 :  printf("1");
						          break;
						case 2 :  printf("2");
						          break;
						case 3 :  printf("3");
						          break;
						case 4 :  printf("4");
						          break;
						case 5 :  printf("5");
						          break;
						case 6 :  printf("6");
						          break;
						case 7 :  printf("7");
						          break;
						case 8 :  printf("8");
						          break;
						case 9 :  printf("9");
						          break;
						case 10 : printf("A");
						          break;
						case 11 : printf("B");
						          break;
						case 12 : printf("C");
						          break;
						case 13 : printf("D");
						          break;
						case 14 : printf("E");
						          break;
						case 15 : printf("F");
						          break;
					}
				  }
				  break;
			case 4 :  system("clear");
				  int bb;
				  char hn[100],c;
				  i=0;
				  j=0;
				  printf("\n\n\n\t\tEnter the hexa decimal number : ");
				  scanf("%s",&hn);
				  i=strlen(hn);
				  printf("\n\n\n\t\tThe binary number of hexadecimal %s is ",hn);
				  for(j=0;j<i;j++)
				  {
				  	c=hn[j];
				  	switch(c)
					{
						case '0' :	printf("0000");
								break;
						case '1' :      printf("0001");
						                break;
						case '2' :      printf("0010");
						                break;
						case '3' :      printf("0011");
						                break;
						case '4' :      printf("0100");
						                break;
						case '5' :      printf("0101");
						                break;
						case '6' :      printf("0110");
						                break;
						case '7' :      printf("0111");
						                break;
						case '8' :      printf("1000");
						                break;
						case '9' :      printf("1001");
						                break;
						case 'A' :      printf("1010");
						                break;
						case 'B' :      printf("1011");
						                break;
						case 'C' :      printf("1100");
						                break;
						case 'D' :      printf("1101");
						                break;
						case 'E' :      printf("1110");
						                break;
						case 'F' :      printf("1111");
						                break;
					}
				  }
				  break;
			case 5 :  system("clear");
				  int oc,bc=0,num=0;
				  printf("\n\n\n\t\tEnter the octal number : ");
				  scanf("%d",&oc);
				  n=oc;
				  i=0;
				  j=0;
				  while(n)
				  {
				  	r=n%10;
					num+=r*pow(8,i);
					i++;
					n/=10;
				  }
				  while(num)
				  {
				  	r=num%2;
					bc+=r*pow(10,j);
					num/=2;
					j++;
				  }
				  printf("\n\n\n\t\tThe binary number of octal number %d is %d",oc,bc);
				  break;
			case 6 :  system("clear");
				  int di,bi;
				  printf("\n\n\n\t\tEnter the decimal numeber : ");
				  scanf("%d",&di);
				  n=di;
				  i=0;
				  while(n)
				  {
				  	r=n%2;
					bi+=r*pow(10,i);
					n/=2;
					i++;
				  }
				  printf("\n\n\n\t\tThe binary number of decimal number %d is %d",di,bi);
				  break;
			case 7 :  system("clear");
				  return(0);
			default : printf("\n\n\t\tSorry, Invalid option entered. Please try again\n\n\t\t");
			  	  system("read -n1 -r -p 'Press any key to continue'");
				  goto A;
		}
		system("clear");
		printf("\n\n\tDo you want to continue?(y/n)");
		scanf("%s",&ans);
		if(ans=='y'||ans=='Y')
			goto A;
		else
		{
			system("clear");
			return(0);
		}
}
