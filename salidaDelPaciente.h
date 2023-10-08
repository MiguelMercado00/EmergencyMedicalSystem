//
// Created by Miguel Mercado on 7/10/23.
//

#ifndef SISTEMAMEDICODEEMERGENCIAS_SALIDADELPACIENTE_H
#define SISTEMAMEDICODEEMERGENCIAS_SALIDADELPACIENTE_H
#include "atencionMedica.h"
#include <queue>
#include <string>


class salidaDelPaciente {
public:
    queue<NodoPaciente*> colaSalidaCodigoAzul;
    queue<NodoPaciente*> colaSalidaEstabilidadUrgente;
    queue<NodoPaciente*> colaSalidaUrgenciasNormales;
    queue<NodoPaciente*> colaSalidaUrgenciasLeves;

    void encolarPaciente(NodoPaciente* paciente);

    NodoPaciente* desencolarSalidaCodigoAzul();
    NodoPaciente* desencolarSalidaEstabilidadUrgente();
    NodoPaciente* desencolarSalidaUrgenciasNormales();
    NodoPaciente* desencolarSalidaUrgenciasLeves();





};


#endif //SISTEMAMEDICODEEMERGENCIAS_SALIDADELPACIENTE_H
