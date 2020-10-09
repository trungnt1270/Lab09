#include <stdio.h>
int dem(char str_arr[], char ch);
main8()
{
	char str[30], ch;
	int a;
	printf("\nNhap chuoi : ");
	gets(str);
	printf("\nNhap ky tu : ");
	scanf("%c", &ch);
	
	a = dem(str,ch);
	printf("\nCo %d ky tu thoa man yeu cau", a);
}

int dem(char str_arr[], char ch)
{
	int count=0, i;
	for(i=0;str_arr[i]!='\0';i++)
	{
		if(str_arr[i]==ch+1)
			count++;
	}
	return count;
}
