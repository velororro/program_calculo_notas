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
        std::string argument = argv[1];
        if (argument == "--version") {
            std::cout << "MiPrograma v1.0" << std::endl;
        } else {
            std::cout << "Tal vez quisiste decir \"--version\"" << std::endl;
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
    while (opcion != 3){
        //menu_inicio();
        nuevo_menu("AÑADIR UN CURSO", {"Añadir un curso", "Añadir un informe"});
        cin >> opcion;
        switch (opcion){
            case 1:
                titulo("AÑADIR UN CURSO");
                break;
            case 2:
                titulo("VER DATOS");
                break;
            case 3:
                titulo("SALIR");
                break;
            default:
                system("cls");
                cout << "Opcion no valida" << endl;
                break;
        }
    }   
}

void titulo(string titulo){
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

void nuevo_menu(string nomb, vector<string> opciones){
    titulo(nomb);
    cout << "-------------------------------" << endl;
    for (int i = 0; i < opciones.size(); i++){
        cout << i + 1 << ". " << opciones[i] << endl;
    }
    cout << "-------------------------------" << endl;
    cout << "Ingrese una opcion: ";
}