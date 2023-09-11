#include <iostream>
#include <locale.h>
#include <vector>

using namespace std;

void program();
void nuevo_titulo(string titulo);
int nuevo_menu(char *nomb, char *opciones[], int num_opciones);
void nuevo_curso();
// validaciones
int opcion_menu_validar(int opcion, int num_opciones);

int main(int args, char* argv[])
{
    if (args > 1) {
        string argument = argv[1];
        if (argument == "--version") {
            cout << endl;
            cout << "Calculo Mis Notas v1.0" << endl;
            cout << "By Ale\t\t2023" << endl << endl;
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
    nuevo_titulo("CALCULO MIS NOTAS");
    char *titulo = "INICIO";
    char *opciones[] = {"Añadir un curso", "Ver datos", "Salir"};
    int num_opciones = 3;
    int opcion = 0;
    opcion = nuevo_menu(titulo, opciones, num_opciones);
    switch (opcion)
    {
        case 1:
            nuevo_titulo("AÑADIR UN CURSO");
            nuevo_curso();
            break;
        case 2:
            nuevo_titulo("VER DATOS");
            break;
        case 3:
            nuevo_titulo("SALIR");
            break;
        default:
            break;
    }
}

void nuevo_titulo(string titulo){
    system("cls");
    cout << titulo << endl;
    cout << "-------------------------------" << endl;
}

int nuevo_menu(char *nomb, char *opciones[], int num_opciones){
    int opcion = 0;

    system("cls");
    //
    nuevo_titulo(nomb);
    //
    for(int i = 0; i < num_opciones; i++){
        cout << i + 1 << ". " << opciones[i] << endl;
    }
    //
    cout << "-------------------------------" << endl;
    cout << "Ingrese una opcion: ";

    // validar
    opcion = opcion_menu_validar(opcion, num_opciones);

    return opcion;
}

int opcion_menu_validar(int opcion, int num_opciones) {
    while (true) {
        string input;
        getline(cin, input);

        if (input.empty()) {
            cout << "-------------------------------" << endl;
            cout << "Entrada vacia. Ingrese una opcion: ";
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
            cout << "-------------------------------" << endl;
            cout << "Entrada inválida. Ingrese una opcion: ";
            continue;
        }

        opcion = stoi(input);
        if (opcion < 1 || opcion > num_opciones) {
            cout << "-------------------------------" << endl;
            cout << "Entrada inválida. Ingrese una opcion: ";
            continue;
        }
        break;
    }
    return opcion;
}

int nota_peso_validar(int opcion) {
    while (true) {
        string input;
        getline(cin, input);

        if (input.empty()) {
            cout << "-------------------------------" << endl;
            cout << "Entrada vacia. Ingrese una opcion: ";
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
            cout << "-------------------------------" << endl;
            cout << "Entrada inválida. Ingrese una opcion: ";
            continue;
        }

        opcion = stoi(input);
        break;
    }
    return opcion;
}

void nuevo_curso(){
    cout << "Ingrese el nombre del curso: ";
    // validar input
    while (true)
    {
        string input;
        getline(cin, input);

        if(input.empty()){
            cout << "-------------------------------" << endl;
            cout << "Entrada vacia. Ingrese nombre de curso: ";
            continue;
        } else {
            break;
        }
    }
    // pedir más datos de curso
    string pesos = "";
    pesos += "-------------------------------\n";
    pesos += "Etapa\tContinua  Examen\n";
    pesos += "-------------------------------\n";
    pesos += "1\n2\n3";
    int pesos_etapas[3][2];

    // validar input
    for (int i = 0; i < 3; i++)
    {
        cout << "\nEtapa " << i + 1 << endl;
        for (int j = 0; j < 2; i++)
        {         
            // validar
            pesos_etapas[i][j] = nota_peso_validar(pesos_etapas[i][j]);
        }
        
    }
    
    cout << "Ingrese pesos de notas: ";

    
}