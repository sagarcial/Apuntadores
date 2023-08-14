#include <iostream>
#include <string>

using namespace std;

int main() {
    const int numEstudiantes = 3;
    const int numNotas = 3; 
    string nombres[numEstudiantes];
    int notas[numEstudiantes][numNotas];

    nombres[0] = "Juan";
    notas[0][0] = 45;
    notas[0][1] = 50;
    notas[0][2] = 40;

    nombres[1] = "María";
    notas[1][0] = 40;
    notas[1][1] = 25;
    notas[1][2] = 10;

    nombres[2] = "Pedro";
    notas[2][0] = 30;
    notas[2][1] = 35;
    notas[2][2] = 50;

    for (int i = 0; i < numEstudiantes; i++) {
        cout << "Datos del estudiante " << i + 1 << endl;
        cout << "Nombre : " << nombres[i] << endl;
        cout << "Notas del estudiante : ";
        for (int j = 0; j < numNotas; j++) {
            cout << notas[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
