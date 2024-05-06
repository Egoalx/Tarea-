//tarea

#include <iostream>
using namespace std;

int main ()  {

    char letra;
    cout << "ingrese una letra" << "endl";
cin >> letra;

 if (letra == 'R')
 {
    cout << "rojo" << endl;
 }
else if (letra == 'Y')
{
    cout << "Amarillo" << endl;
}
else if (letra == 'B')
{
    cout << "azul" << endl;
}
else if (letra == 'W')
{
    cout << "Blanco" << endl;
}
else if (letra  == 'K')
{
    cout << "negro" << endl;
}
else if (letra == 'C')
{
    cout << "cian" << endl;
}
else if (letra == 'G')
{
    cout << "verde" << endl;
}
{else cout << "color desconocido" << endl;}

return 0;

}