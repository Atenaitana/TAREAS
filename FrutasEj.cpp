#include <iostream>
#include <clocale>

using namespace std;

int main() {

    setlocale(LC_ALL, "");

    // Arreglo bidimensional
    int ventas[3][3];

    string frutas[3] = { "Manzana", "Platano", "Mango" };
    string dias[3] = { "Lunes", "Martes", "Miercoles" };

    int totalFruta, totalDia, totalGeneral = 0;

    cout << "REGISTRO DE VENTAS\n" << endl;

    // Capturar datos
    for (int i = 0; i < 3; i++) {

        cout << frutas[i] << ":" << endl;

        for (int j = 0; j < 3; j++) {

            cout << "Ventas del " << dias[j] << ": ";
            cin >> ventas[i][j];
        }


        cout << endl;
    }

    // TOTAL POR FRUTA
    cout << "\nTOTAL POR FRUTA\n" << endl;

    for (int i = 0; i < 3; i++) {

        totalFruta = 0;

        for (int j = 0; j < 3; j++) {
            totalFruta += ventas[i][j];
        }

        cout << frutas[i] << ": " << totalFruta << "Kg" << endl;
    }

    // TOTAL POR DIA
    cout << "\nTOTAL POR DIA\n" << endl;

    for (int j = 0; j < 3; j++) {

        totalDia = 0;

        for (int i = 0; i < 3; i++) {
            totalDia += ventas[i][j];
        }

        cout << dias[j] << ": " << totalDia << endl;
    }

    // TOTAL GENERAL
    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {
            totalGeneral += ventas[i][j];
        }
    }

    cout << "\nTOTAL GENERAL: " << totalGeneral << endl;

    return 0;
}