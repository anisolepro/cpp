#include<iostream.h>
#include<conio.h>

class className{
int x ;
public:
void setValue(int a){ x =a;}
void getValue(){
cout<<"x = "<<x<<endl;
}

className operator -(){
className temp;
temp.x = -x;
return temp;
}
};

main(){
clrscr();
className obj1;
obj1.setValue(69);
cout<<"Before operator overLoad "<<endl;
obj1.getValue();
obj1 = -obj1;
cout<<"After Operator overload "<<endl;
obj1.getValue();
getch();
}
