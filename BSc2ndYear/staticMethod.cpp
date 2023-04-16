#include<iostream.h>
#include<conio.h>

class className{
public:
static int  x;

static void getValue(){
cout<<endl<<"value of x = "<<x++;
}
};
int className::x = 10;

main(){
clrscr();

className::getValue();
className::getValue();
className::getValue();
getch();
}
