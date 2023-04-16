#include<iostream.h>
#include<conio.h>

inline float area(float radius){
return 3.142*radius*radius  ;
}

main(){
float radius;
clrscr();
cout<<"Enter radius :";
cin>>radius;
cout<<"Area = "<<area(radius);

getch();
}
