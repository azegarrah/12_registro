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

    for(int i = 0; i < n; i++){
        cout << "\nlibro " << i + 1 << '\n';
        cout << "Titulo: ";
        getline(cin, libros[i].titulo);
        cout << "Autor: ";
        getline(cin, libros[i].autor);
        cout << "Editorial: ";
        getline(cin, libros[i].editorial);
        cout << "Anio de publicacion: ";
        cin >> libros[i].anioPublicacion;
        cin.ignore();
    }

    cout << "\nLISTADO DE LIBROS REGISTRADOS\n";
    for(int i = 0; i < n; i++){
        cout << "\nLibro " << i + 1 << '\n';
        cout << "Titulo: " << libros[i].titulo << '\n';
        cout << "Autor: " <<  libros[i].autor << '\n';
        cout << "Editorial: " << libros[i].editorial << '\n';
        cout << "Anio: " <<  libros[i].anioPublicacion << '\n';
    }
    return 0;
}