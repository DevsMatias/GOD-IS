#include <iostream>
#include <stdlib.h>
using namespace std;

//este codigo va a generar un texto alabando al nombre de la persona que le des
//prototipos
void dialogo(char[]);

int main()
{
    char nombre[] = "";
    int finalizar = 0;
    cout << "Bienvenido/a\n";

    do {
        cout << "\n 1. Nombrar dios\n 2. Salir\n >";
        cin >> finalizar;
        if (finalizar == 1) {
            cout << " Introduzca un nombe: "; cin >> nombre;
            dialogo(nombre);
        }
        else {
            system("cls");
        }
    } while (finalizar != 2);
    delete &nombre;
    return 0;
};
void dialogo(char nombre[]) {
    cout << "\n Para el ciego, es luz";
    cout << "\n Para el hambriento, es pan";
    cout << "\n Para el enfermo, es la cura";
    cout << "\n Para el solitario, es la compañia";
    cout << "\n Para el triste, es la alegria";
    cout << "\n Para el Prisionero, es la libertad";
    cout << "\n Para el pobre, es el tesoro";
    cout << "\n Para el deudor, es el perdon";
    cout << "\n si "<<nombre<<" opina, le doy la razon";
    cout << "\n si " << nombre << " habla, lo escucho";
    cout << "\n si "<<nombre<<" falla, lo apoyo";
    cout << "\n si "<<nombre<<" muere, muero con el";
    cout << "\n si el mundo odia a "<<nombre<<", soy yo contra el mundo";
    cout << "\n si "<<nombre<<" tiene un fan, soy yo";
    cout << "\n si "<<nombre<<" no tiene fans, es porque yo ya he muerto...\n";
    system("pause");
};
