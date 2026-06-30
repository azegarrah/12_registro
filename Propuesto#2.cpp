#include <iostream>
using namespace std;

struct Persona{
    string nombre;
    string dni;
    int edad;
};
int main(){
    int n;
    cin >> n;
    Persona per[n];

    int mayores = 0;
    int suma = 0;
    for(int i = 0; i < n; i++){
        cin >> per[i].nombre;
        cin >> per[i].dni;
        cin >> per[i].edad;
        suma = suma + per[i].edad;

        if(per[i].edad > 50){
            mayores++;
        }
    }
    return 0;
}