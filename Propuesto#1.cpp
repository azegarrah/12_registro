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
    return 0;
}