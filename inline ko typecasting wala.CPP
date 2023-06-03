#include<iostream.h>
#include<conio.h>

inline int multiplication(int a,int b)
{
	return(a*b);
}


inline float division(int a,int b)
{
	return((float)a/b);
}

void main()
{
	int a,b,M;
   float D;
   cout<<"Enter two numbers"<<endl;
   cin>>a>>b;
   M=multiplication(a,b);
   D=division(a,b);
   cout<<"the product is "<<M<<endl;
   cout<<"the division result is"<<D<<endl;
   getch();
}

