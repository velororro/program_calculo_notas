#include <iostream>

using namespace std;

void program();

int main(int args, char* argv[])
{
    if (args > 1) {
        std::string argument = argv[1];
        if (argument == "--version") {
            std::cout << "MiPrograma v1.0" << std::endl;
        } else {
            std::cout << "Argumento no reconocido." << std::endl;
        }
    } else {
        program();
    }
    return 0;
}

void program(){
    cout << "Hola mundo" << endl;
}