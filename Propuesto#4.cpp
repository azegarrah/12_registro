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
    return 0;
}