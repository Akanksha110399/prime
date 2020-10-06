#include<stdio.h>
int prime(int num,int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (num % i == 0)
       {
         return 0;
       }
       else
       {
         return prime(num, i - 1);//recursion
       }       
    }
}
int main()
{
	int num,flag;
	printf("Enter the number which you want to check\n");
	scanf("%d",&num);
	flag=prime(num,num/2);
	if(flag==1)
	{
		printf("%d is Prime number\n",num);
	}
	else
	printf("%d is not Prime number\n",num);
	return 0;
}
