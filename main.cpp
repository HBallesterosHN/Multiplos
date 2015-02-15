//Suma de los multiplos menores de 500 de 2 numeros
#include <iostream>
using namespace std;
int main()
{//Inicia programa
    int x=0, y=0, suma=0;
    cout<<"Programa que devuelve la suma de los multiplos menores de 500, de 2 numeros"<<endl<<endl;
    cout<<"Ingrese Numero Primero:        "; cin>>x;
    cout<<"Ingrese Numero Segundo:        "; cin>>y;
    for(int i =0; i<500 ;i++)
        {
        suma +=  (x*i + y*i);//acumula la suma del multiplo de cada numero (i)
        }
    cout<<"La suma de los multiplos es: "<<suma<<endl;//muestra la suma
    return 0;
}//fin programa
