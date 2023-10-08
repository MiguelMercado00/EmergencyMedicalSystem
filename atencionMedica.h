//
// Created by Miguel Mercado on 7/10/23.
//

#ifndef SISTEMAMEDICODEEMERGENCIAS_ATENCIONMEDICA_H
#define SISTEMAMEDICODEEMERGENCIAS_ATENCIONMEDICA_H
#include "triage.h"
#include <stack>


class AtencionMedica {
public:

    void trasladarPacienteAPila(NodoPaciente* paciente, string nombrePila);
    string atencionMedicaAleatoria();
    string atencionMedicaAleatoriaEspecificaNormal();
    string atencionMedicaAleatoriaEspecificaLeve();
    string tiempoDeEsperaCodigoAzul();
    int tiempoDeEsperaEstabilidadUrgente();
    int tiempoDeEsperaUrgenciasNormales();
    int tiempoDeEsperaUrgenciasLeves();

    stack<NodoPaciente*> pilaCodigoAzul;
    stack<NodoPaciente*> pilaEstabilidadUrgente;
    stack<NodoPaciente*> pilaUrgenciasNormales;
    stack<NodoPaciente*> pilaUrgenciasLeves;

};


#endif //SISTEMAMEDICODEEMERGENCIAS_ATENCIONMEDICA_H
