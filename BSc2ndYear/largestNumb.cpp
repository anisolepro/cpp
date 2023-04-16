#include<iostream.h>
#include<conio.h>

class className{
float a,b,c,big;
public:
void largeNumb(){
cout<<"\nEnter 3 numbers : ";
cin>>a>>b>>c;
big = b>a?b:a;
big = c>big ? c:big;
cout<<big<<" is the greatest Number";
}
};
main(){
clrscr();
className obj;
obj.largeNumb();
getch();
}
