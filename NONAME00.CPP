#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int i,j,n;
   char name[100][20],c[20];
   printf("Enter a value of n");
   scanf("%d",&n);

   printf("\n Enter name of %d students",n);
   for(i=0;i<=n;i++)
   {
   	gets(name[i]);

   }
   printf("\n The name of students are \n");
   for(i=0;i<=n;i++)
   {
      puts(name[i]);
   }
   for(i=0;i<=n-1;i++)
   {
   	 for(j=i+1;j<=n;j++)
       {
       	if(strcmp(name[i],name[j])>0)
         {
         	strcpy(c,name[i]);
            strcpy(name[i],name[j]);
            strcpy(name[j],c);
          }
        }
    }
    printf("\n After Sorting\n");
    for(i=0;i<=n;i++)
    {
    	puts(name[i]);
    }
    getch();
}




