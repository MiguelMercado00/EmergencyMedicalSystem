//
// Created by Miguel Mercado on 7/10/23.
//

#include "salidaDelPaciente.h"
#include "atencionMedica.h"
#include <random>

void salidaDelPaciente::encolarPaciente(NodoPaciente* paciente) {
    // Encolar al paciente en la cola correspondiente
    if (paciente->codigoTriage == "Código Azul") {
        colaSalidaCodigoAzul.push(paciente);
    } else if (paciente->codigoTriage == "Estabilidad Urgente") {
        colaSalidaEstabilidadUrgente.push(paciente);
    } else if (paciente->codigoTriage == "Urgencias Normales") {
        colaSalidaUrgenciasNormales.push(paciente);
    } else if (paciente->codigoTriage == "Urgencias Leves") {
        colaSalidaUrgenciasLeves.push(paciente);
    } else {
        cout << "Nombre de cola no válido." << endl;
    }
}
