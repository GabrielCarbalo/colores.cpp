#include <iostream>
using namespace std;
int main(){
    std:: cout << "Ingrese una letra: ";
    char letra;
    std:: cin >> letra;

    switch (letra) {
        case 'R':
        std::cout << "El color asociado con la letra R es rojo.\n";
        break;

        case 'Y':
        std::cout << "El color asociado con la letra Y es amarillo.\n";
        break;

        case 'B':
        std::cout << "El color asociado con la letra B es azul.\n";
        break;

        case 'W':
        std::cout << "El color asociado con la letra W es blanco.\n";
        break;

        case 'K':
        std::cout << "El color asociado con la letra K es negro.\n";
        break;

        case 'C':
        std::cout << "El color asociado con la letra C es cion.\n";
        break;

        case 'G':
        std::cout << "El color asociado con la letra G es verde.\n";
        break;

        default:
        std::cout << "No se encontro ningun color asociado con la letra " << letra << ".\n";
        break;
    }
    return 0;
}