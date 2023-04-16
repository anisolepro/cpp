#include<iostream.h>
#include<conio.h>

class className{
int x;
public:
void setValue(int a ){x =a ;}
void getValue(){
cout<<"x = "<<x<<endl;
}

className operator +(className obj){
className temp;
temp.x = x+obj.x;
return temp;
}
};
main(){
clrscr();
className obj1,obj2,obj3;
obj1.setValue(60);
obj2.setValue(9);
obj3 = obj1+obj2;
obj3.getValue();
getch();
}
