#include <iostream>
using namespace std;

struct Empleado{
    int numero;
    string nombres;
    int ventas;
    double salario;    
};

int main(){
    int n;
    cin >> n;
    Empleado E[50];    

    for(int i = 0; i < n; i++){
        cin >> E[i].numero;
        cin >> E[i].nombres;

        for(int j = 0; j < 12; j++){
            cin >> E[i].ventas;
        }
        cin >> E[i].salario;
    }
    int mayor = 0;
    int maxVentas = 0;

    return 0;
}