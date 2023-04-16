#include <iostream.h>
#include <conio.h>

main()
{
    int size, *arr;
    clrscr();
    cout << "Enter Length of Array : ";
    cin >> size;

    arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << "Array Elements : " << endl;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    delete[] arr;
    getch();
}
