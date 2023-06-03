#include <stdio.h>
#include<conio.h>

void main()
{
  int i,j,esum=0,a[4][4];
  printf("\n Enter elements in a matrix");
  for(i=0;i<4;i++)
  {
  	for(j=0;j<4;j++)
   {
   	scanf("%d",&a[i][j]);
   }
  }
  for(i=0;i<4;i++)
  {
  	for(j=0;j<4;j++)
   {
   	printf("%d\n",a[i][j]);
   }
  }
  	for(i=0;i<4;i++)
  	{
  		for(j=0;j<4;j++)
   	{
   		if(a[i][j]%2==0)
      	{
      		esum=esum+a[i][j];
      	}
   	}
 	}
 	printf("the even sum is %d",esum);
 	getch();
 }




