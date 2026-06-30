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
        
        if(mesBuscado != 0){
            for(int i = 0; i < n; i++){
                if(per[i].mes == mesBuscado){
                    cout << per[i].nombre << " ";
                    cout << per[i].dia << "/";
                    cout << per[i].mes << "/";
                    cout << per[i].anio << '\n';
                }
            }
        }
    } while(mesBuscado != 0);

    return 0;
}