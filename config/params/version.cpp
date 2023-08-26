#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc > 1) {
        std::string argument = argv[1];
        if (argument == "--version") {
            std::cout << "MiPrograma v1.0" << std::endl;
        } else {
            std::cout << "Argumento no reconocido." << std::endl;
        }
    } else {
        std::cout << "Uso: " << argv[0] << " --version" << std::endl;
    }

    return 0;
}
