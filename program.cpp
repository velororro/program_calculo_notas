#include <iostream>
#include <locale.h>
#include <vector>

using namespace std;

void program();
void titulo(string titulo);
void menu_inicio();
void nuevo_menu(string titulo, vector<string> opciones);

int main(int args, char* argv[])
{
    if (args > 1) {
        string argument = argv[1];
        if (argument == "--version") {
            system("cls");
            cout << "Calculo Mis Notas v1.0" << endl;
            cout << "By Ale\t\t2023" << endl;
        } else {
            cout << "Tal vez quisiste decir \"--version\"" << endl;
        }
    } else {
        program();
    }
    return 0;
}

void program(){
    setlocale(LC_ALL, "Spanish");
    titulo("CALCULO MIS NOTAS");
    titulo("INICIO");
    int opcion = 0;
}

void new_titulo(string titulo){
    system("cls");
    cout << titulo << endl;
    cout << "-------------------------------" << endl;
}

void menu_inicio(){
    cout << "1. Añadir un curso" << endl;
    cout << "2. Ver datos" << endl;
    cout << "3. Salir" << endl;
    cout << "-------------------------------" << endl;
    cout << "Ingrese una opcion: ";
}

void nuevo_menu(char *nomb, char *opciones[], int num_opciones){
    titulo(nomb);
    bool salir = false;
    do {
        system("cls");
        cout << nomb << endl;
        for(int i = 0; i < num_opciones; i++){
            cout << i + 1 << ". " << opciones[i] << endl;
        }
    } while (!salir);
}