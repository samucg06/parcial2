#include "../include/PaqueteEnvio.h"
#include <iostream>

// Constructor
PaqueteEnvio::PaqueteEnvio(std::string id, float peso, std::string destino) {
    if (peso <= 0) {
        throw std::invalid_argument("El peso debe ser positivo");
    }

    this->id = id;
    this->peso = peso;
    this->destino = destino;
    this->entregado = false;
}

// Métodos
void PaqueteEnvio::actualizarEstado(const std::string& estado) {
    historialEstados.push_back(estado);
}

void PaqueteEnvio::marcarEntregado() {
    entregado = true;
    historialEstados.push_back("Entregado");
}

std::string PaqueteEnvio::obtenerUltimoEstado() const {
    if (historialEstados.empty()) {
        return "Sin estados registrados";
    }
    return historialEstados.back();
}

void PaqueteEnvio::imprimirHistorial() const {
    std::cout << "Historial del paquete " << id << ":\n";
    for (const auto& estado : historialEstados) {
        std::cout << "- " << estado << std::endl;
    }
}

// Getters
std::string PaqueteEnvio::getId() const { return id; }
std::string PaqueteEnvio::getDestino() const { return destino; }
float PaqueteEnvio::getPeso() const { return peso; }
