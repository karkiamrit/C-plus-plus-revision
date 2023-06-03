#include<iostream.h>
#include<conio.h>
class mountain

{
	private:
   	char name[20];
      char location[20];
      float height;
    public:
    	 void input()
       {
       	cout<<"Enter name of mountain"<<endl;
         cin>>name;
         cout<<"Enter address of mountain"<<endl;
         cin>>location;
          cout<<"Enter height of mountain"<<endl;
         cin>>height;
       }
       void display()
       {
       	 cout<<"name of mountain is "<<name<<endl;
          cout<<"location of mountain is "<<location<<endl;
          cout<<"height of mountain is "<<address<<endl;
        }
};
void main()
{
    mountain m1,m2;

    m1.input();
    m2.input() ;
    m1.display();
    m2.display();
    getch();
}
