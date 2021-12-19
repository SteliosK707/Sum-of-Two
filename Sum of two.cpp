#include<stdio.h>
 
int main() 
{
   int a, b, sum, i;
  
   do
   {
   printf("\nEnter two numbers: ");
   scanf("%d %d", &a, &b);
   sum = a + b;
   printf("Sum : %d\n\n", sum);
   	do
   	{
   		printf("Press 1 for another sum.\nPress 0 to Exit.\n");
   		scanf("%d", &i);
   		if((i>1) || (i<0))
   		{
   			printf("\nPlease enter ''1' or '0'' as your input\n");
		}
	}while((i>1) || (i<0));
   }while (i>0);
   return(0);
}
