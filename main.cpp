#include <iostream>
#include <vector>
#include "../include/PaqueteEnvio.h"

using namespace std;

int main() {
    vector<PaqueteEnvio> paquetes;

    // Crear 2 paquetes con datos del usuario
    for (int i = 0; i < 2; i++) {
        string id, destino;
        float peso;

        cout << "\nIngrese ID del paquete: ";
        cin >> id;

        cout << "Ingrese peso: ";
        cin >> peso;

        cout << "Ingrese destino: ";
        cin >> destino;

        PaqueteEnvio p(id, peso, destino);
        paquetes.push_back(p);
    }

    // Simulación
    for (auto& p : paquetes) {
        p.actualizarEstado("En bodega");
        p.actualizarEstado("En camino");
        p.marcarEntregado();
    }

    // Mostrar resultados
    cout << "\n--- RESULTADOS ---\n";
    for (const auto& p : paquetes) {
        cout << "\nPaquete ID: " << p.getId() << endl;
        cout << "Destino: " << p.getDestino() << endl;
        cout << "Peso: " << p.getPeso() << endl;
        cout << "Ultimo estado: " << p.obtenerUltimoEstado() << endl;
        p.imprimirHistorial();
    }

    return 0;
}
