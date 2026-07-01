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
    }

    return 0;
}