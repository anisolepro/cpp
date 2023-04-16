#include<iostream.h>
#include<conio.h>

class company{
char name[100];
float pay,hra;
public:
company(){

cout<<"Enter name : ";
cin>>name;
cout<<"Enter Basic Pay : ";
cin>>pay;
cout<<"Enter HRA : ";
cin>>hra;
}

void details(){

   cout<<endl<<"Name = "<<name;
   cout<<endl<<"Basic Pay = "<<pay;
   cout<<endl<<"HRA = "<<hra;
   }

};

main(){
clrscr();
company ap;
ap.details();

getch();
}
