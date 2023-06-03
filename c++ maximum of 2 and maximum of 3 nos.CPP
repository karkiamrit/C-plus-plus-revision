#include<iostream.h>
#include<conio.h>
int maximum(int a,int b);
int maximum(int d,int e,int f);
void main()
{
   int a,b,m1;
   cout<<"Enter 2 no: ";
   cin>>a>>b;
   m1=maximum(a,b);
   cout<<"maximum is"<<m1<<endl;

   int d,e,f,m2;
   cout<<"Enter 3 no: ";
   cin>>d>>e>>f;
   m2=maximum(d,e,f);
   cout<<"maximum is"<<m2<<endl;
   getch();
}
int maximum(int a,int b)
{
	if(a>b)
   {
   	return(a);
   }
   else
   {
   	return(b);
   }
}
int maximum(int d,int e,int f)
{
	if(d>e && d>f)
   {
   	return(d);
    }
    else if(e>f)
    {
    	return(e);
    }
    else
    {
    	return(f);
    }
}