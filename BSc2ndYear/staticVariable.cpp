#include<iostream.h>
#include<conio.h>

class className{
public :
static int count;
void getvalue(){
cout<<"cout Value = "<<count++<<endl;
}
};
int className::count = 0;


main() {
clrscr();
className obj1,obj2;
 obj1.getvalue();
 obj2.getvalue();
 obj1.getvalue();
getch();
}
