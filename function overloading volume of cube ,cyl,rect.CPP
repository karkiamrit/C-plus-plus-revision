#include<iostream.h>
#include<conio.h>
int volume(int n);
int volume(int l,int b,int h);
float volume(float r,float a);
void main()
{
   int n,v1;
   cout<<"Enter side of cube:  ";
   cin>>n;
   v1=volume(n);
   cout<<"volume of cube is"<<v1<<endl;

   int l,b,h,v2;
   cout<<"Enter length ,breadth and height of rectangular box: ";
   cin>>l>>b>>h;
   v2=volume(l,b,h);
   cout<<"volume of box is"<<v2<<endl;

   float r,a,v3;
   cout<<"Enter radius and height of cylinder: ";
   cin>>r>>a;
   v3=volume(r,a);
   cout<<"volume of cylinder is"<<v3<<endl;

   getch();

}
int volume(int n)
{
	return(n*n*n);
}
int volume(int l,int b,int h)
{
	return(l*b*h);
}
float volume(float r,float a)
{
	return(3.14*r*r*a);
}
