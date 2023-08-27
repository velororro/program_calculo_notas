#include <iostream>
#include <locale.h>
#include <vector>

using namespace std;

void program();
void new_titulo(string titulo);
void menu_inicio();
int nuevo_menu(char *nomb, char *opciones[], int num_opciones);

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
    new_titulo("CALCULO MIS NOTAS");
    char *titulo = "INICIO";
    char *opciones[] = {"Añadir un curso", "Ver datos", "Salir"};
    int num_opciones = 3;
    int opcion = 0;
    do {
        opcion = nuevo_menu(titulo, opciones, num_opciones);
    } while (opcion < 1 || opcion > num_opciones);
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

int nuevo_menu(char *nomb, char *opciones[], int num_opciones){
    int opcion = 0;

    system("cls");
    //
    new_titulo(nomb);
    //
    for(int i = 0; i < num_opciones; i++){
        cout << i + 1 << ". " << opciones[i] << endl;
    }
    //
    cout << "-------------------------------" << endl;
    cout << "Ingrese una opcion: ";

    while (true)
    {
        string input;
        getline(cin, input);

        if (input.empty()) {
            cout << "Entrada vacia. Introduzca una opción válida" << endl;
            continue;
        }
        bool valid = true;
        for (char c : input) {
            if (!isdigit(c)) {
                valid = false;
                break;
            }
        }

        if (!valid) {
            cout << "Entrada inválida. Introduzca un número de opción válido" << endl;
            continue;
        }

        opcion = stoi(input);
        if (opcion < 1 || opcion > num_opciones) {
            cout << "Entrada inválida. Introduzca una opción válida" << endl;
            continue;
        }
        break;
    }
    return opcion;
}