#include <iostream>
#include <locale.h>
using namespace std;
int a, b, c, sum, razn, umn, del;

void umnozh ( )
{
cout << "������� ����� � � �: ";
cin >> a;
cin >> b;
umn = 0;
for (int i = 0; i<b; ++i)
{
}
cout << "������������ ����� �����:" << umn;
system("pause");
}
void raznost( )
{
cout << "������� ����� � � �: ";
cin >> a;
cin >> b;
razn = a-b;
cout << "�������� ����� �����:" << razn;
system("pause");
umnozh ( );
}
void main ( )
{
setlocale(LC_ALL, "RUS");
cout << "������� ����� � � �: ";
cin >> a;
cin >> b;
sum = a+b;
cout << "����� ����� �����:" << sum;
system("pause");
raznost( );
}


