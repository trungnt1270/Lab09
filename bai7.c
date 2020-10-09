#include <stdio.h>

main7()
{
	int i, total=0;
	for(i=300;i<=500;i++)
	{
		if(i%7==0)
		{
			total+=i;
			printf("\n i is %d, total is %d",i ,total);
		}
	}
	printf("\n Total is : %d", total);
}
