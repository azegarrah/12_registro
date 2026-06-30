#include <iostream>
using namespace std;

struct Atleta {
    string nombre;
    string pais;
    string disciplina;
    int medallas;
};

int main(){
    int n;
    cin >> n;
    Atleta atl[n];

    for(int i = 0; i < n; i++){
        cin >> atl[i].nombre;
        cin >> atl[i].pais;
        cin >> atl[i].disciplina;
        cin >> atl[i].medallas;
    }
    string paisBuscado;
    cin >> paisBuscado;

    int mayor = -1;
    for(int i = 0; i < n; i++){
        if(atl[i].pais == paisBuscado){
            cout << atl[i].nombre << " ";
            cout << atl[i].disciplina << " ";
            cout << atl[i].medallas << '\n';

            if(mayor == -1 || atl[i].medallas > atl[mayor].medallas){
                mayor = i;
            }
        }
    }
    if(mayor != -1){
        cout << atl[mayor].nombre << " ";
        cout << atl[mayor].medallas << '\n';
    }
    return 0;
}