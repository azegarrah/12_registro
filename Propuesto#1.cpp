#include <iostream>
using namespace std;

struct Empleado{
    string nombre;
    char sexo;
    double sueldo;
};
int main(){
    int n;
    cin >> n;
    Empleado emp[n];

    for(int i = 0; i < n; i++){
        cin >> emp[i].nombre;
        cin >> emp[i].sexo;
        cin >> emp[i].sueldo;
    }

    int mayor = 0;
    int menor = 0;
    for(int i = 1; i < n; i++){
        if(emp[i].sueldo > emp[mayor].sueldo){
            mayor = i;
        }
        if(emp[i].sueldo < emp[menor].sueldo){
            menor = i;
        }
    }
    return 0;
}