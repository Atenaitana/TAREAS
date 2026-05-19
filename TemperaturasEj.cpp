#include <iostream>
#include <clocale>
#include <iomanip>

using namespace std;

int main() {

    setlocale(LC_ALL, "");

    const int DIAS = 5;
    float temperaturas[DIAS];

    float maxima, minima, diferencia;

    cout << "CAPTURA DE TEMPERATURAS\n" << endl;

    // Capturar temperaturas
    for (int i = 0; i < DIAS; i++) {
        cout << "Ingresa la temperatura del dia " << i + 1 << ": ";
        cin >> temperaturas[i];

        // Inicializar máxima y mínima
        if (i == 0) {
            maxima = temperaturas[i];
            minima = temperaturas[i];
        }

        // Buscar máxima
        if (temperaturas[i] > maxima) {
            maxima = temperaturas[i];
        }

        // Buscar mínima
        if (temperaturas[i] < minima) {
            minima = temperaturas[i];
        }
    }

    // Calcular diferencia
    diferencia = maxima - minima;

    cout << fixed << setprecision(2);

    cout << "\nRESULTADOS\n" << endl;
    cout << "Temperatura maxima: " << maxima << " °C" << endl;
    cout << "Temperatura minima: " << minima << " °C" << endl;
    cout << "Diferencia: " << diferencia << " °C" << endl;

    return 0;
}