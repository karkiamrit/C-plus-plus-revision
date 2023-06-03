#include<iostream.h>
#include<conio.h>
int area(int n);
int area(int l,int b);
float area(float r,float h);
void main()
{
   int n,a1;
   cout<<"Enter side of cube:  ";
   cin>>n;
   a1=area(n);
   cout<<"area of cube is"<<a1<<endl;

   int l,b,a2;
   cout<<"Enter length ,breadth of rectangle: ";
   cin>>l>>b;
   a2=area(l,b);
   cout<<"area of rectangle is"<<a2<<endl;

   float r,h,a3;
   cout<<"Enter radius and height of cylinder: ";
   cin>>r>>h;
   a3=area(r,h);
   cout<<"area of cylinder is"<<a3<<endl;

   getch();

}
int area(int n)
{
	return(6*n*n);
}
int area(int l,int b)
{
	return(l*b);
}
float area(float r,float h)
{
	return(2*3.14*r*(r+h));
}
