#include<iostream.h>
#include<conio.h>

class className{
public:
void display(){
cout<<"address = "<<this;
}
};

main(){
clrscr();
className obj;
obj.display();
getch();
}
