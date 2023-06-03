#include <stdio.h>
#include<conio.h>

void main()
{
  int i,j,esum=0,a[20][20],m,n;
  printf("\nEnter row and column size");
  scanf("%d%d",&m,&n);
  printf("\n Enter elements in a matrix");
  for(i=0;i<m;i++)
  {
  	for(j=0;j<n;j++)
   {
   	scanf("%d",&a[i][j]);
   }
  }
  for(i=0;i<m;i++)
  {
  	for(j=0;j<n;j++)
   {
   	printf("%d\n",a[i][j]);
   }
  }
  	for(i=0;i<m;i++)
  	{
  		for(j=0;j<n;j++)
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




