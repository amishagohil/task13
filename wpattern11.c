#include<stdio.h>

int main()
{
	    int i,j,k;
	    for(i=5;i>=1;i--)
	    {
	    	for(k=i;k<=4;k++)
			{
				printf(" ");	    	
			}
	    	  for(j=1;j<=i;j++)
	    	  {
	    	  	printf("*");
			  }
			printf("\n");  
		}
}
