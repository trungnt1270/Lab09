main3()
{
	int i, num, count=0;
	
	printf("\nNhap so : ");
	scanf("%d", &num);
	
	if(num<2)
	{
		printf("\n%d khong phai la so nguyen to", num);
	}
	else
	{
		for(i=2;i<num;i++)
		{
			if(num%i==0)
				count++;
		}
	}
	if(count==0)
		printf("\n%d la so nguyen to", num);
	else
		printf("\n%d khong phai la so nguyen to", num);
}
