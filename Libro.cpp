#include <iostream>
#include <string>
using namespace std;

struct libro{
    string titulo;
    string autor;
    string editorial;
    int anioPublicacion;
};

int main(){
    int n;
    libro libros[100];
    cout << "Ingrese la cantidad de libros: ";
    cin >> n;
    cin.ignore();
    return 0;
}