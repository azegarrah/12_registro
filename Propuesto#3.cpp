#include <iostream>
using namespace std;

struct Persona{
    string nombre;
    int dia;
    int mes;
    int anio;
};
int main(){
    int n;
    cin >> n;
    Persona per[n];

    for(int i = 0; i < n; i++){
        cin >> per[i].nombre;
        cin >> per[i].dia;
        cin >> per[i].mes;
        cin >> per[i].anio;
    }

    int mesBuscado;
    do{
        cin >> mesBuscado;

    } while(mesBuscado != 0);

    return 0;
}