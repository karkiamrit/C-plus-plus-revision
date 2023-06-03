#include<iostream.h>
#include<conio.h>
int sum(int a,int b);
int sum(int c,int d,int e);
float sum(float f,float g);

void main()

{
 	int a,b,s1;
   cout<<"Enter a and b";
   cin>>a>>b;
   s1=sum(a,b);
   cout<<"Sum of numbers is"<<s1;

   int c,d,e,s2;
   cout<<"Enter c,d and e";
   cin>>c>>d>>e;
   s2=sum(c,d,e);
   cout<<"Sum of numbers is"<<s2;

   float f,g,s3;
   cout<<"Enter f and g";
   cin>>f>>g;
   s3=sum(f,g);

   cout<<"Sum of numbers is"<<s3;
   getch();
}
int sum(int a,int b)
{
	return(a+b);
}
int sum(int c,int d,int e)
{
	return(c+d+e);
}
float sum(float f,float g)
{
	return(f+g);
}
