#include <iostream.h>
#include <conio.h>

class className
{
    float a, b;

public:
    void setValue()
    {
        cout << "Enter 2 Numbers : ";
        cin >> a >> b;
    }
    // friends Function can access private properties and Methods
    friend void sum(className obj);
};

void sum(className obj)
{
    cout << endl
         << "sum = " << obj.a + obj.b;
}

main()
{
    clrscr();
    className obj;
    obj.setValue();
    sum(obj);

    getch();
}
