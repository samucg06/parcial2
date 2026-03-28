#ifndef PAQUETEENVIO_H
#define PAQUETEENVIO_H

#include <string>
#include <vector>

/**
 * @class PaqueteEnvio
 * @brief Representa un paquete de envío con su información y estados.
 */
class PaqueteEnvio {
private:
    std::string id;
    float peso;
    std::string destino;
    bool entregado;
    std::vector<std::string> historialEstados;

public:
    /**
     * @brief Constructor de la clase
     * @param id Identificador del paquete
     * @param peso Peso del paquete
     * @param destino Lugar de destino
     */
    PaqueteEnvio(std::string id, float peso, std::string destino);

    void actualizarEstado(const std::string& estado);
    void marcarEntregado();
    std::string obtenerUltimoEstado() const;
    void imprimirHistorial() const;

    // Getters
    std::string getId() const;
    std::string getDestino() const;
    float getPeso() const;
};

#endif
