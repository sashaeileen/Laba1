#include <iostream>
#include <locale.h>
using namespace std;
int a, b, c, sum, razn, umn, del;

void umnozh ( )
{
cout << "Введите числа а и б: ";
cin >> a;
cin >> b;
umn = 0;
for (int i = 0; i<b; ++i)
{
}
cout << "Произведение чисел равно:" << umn;
system("pause");
}
void raznost( )
{
cout << "Введите числа а и б: ";
cin >> a;
cin >> b;
razn = a-b;
cout << "Разность чисел равна:" << razn;
system("pause");
umnozh ( );
}
void main ( )
{
setlocale(LC_ALL, "RUS");
cout << "Введите числа а и б: ";
cin >> a;
cin >> b;
sum = a+b;
cout << "Сумма чисел равна:" << sum;
system("pause");
raznost( );
}


