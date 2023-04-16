#include<iostream.h>
#include<conio.h>

class className{
int a,b;
public:

className(int a,int b){
this->a = a;
this->b = b;

}
className(className  &obj){
a = obj.a;
b = obj.b;
}


void getValue(){
cout<<"value of a = "<<a<<endl;
cout<<"value of b = "<<b<<endl;
}
};

main(){
clrscr();
className obj1(6,9),obj2(obj1);
cout<<"obj1 "<<endl;
obj1.getValue();
cout<<endl<<"obj2"<<endl;
obj2.getValue();

getch();
}
