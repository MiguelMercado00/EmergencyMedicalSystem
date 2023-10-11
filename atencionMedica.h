//
// Created by Miguel Mercado on 7/10/23.
//

#ifndef SISTEMAMEDICODEEMERGENCIAS_ATENCIONMEDICA_H
#define SISTEMAMEDICODEEMERGENCIAS_ATENCIONMEDICA_H
#include "triage.h"
#include <stack>


class AtencionMedica {
public:

    void trasladarPacienteAPila1(NodoPaciente* paciente, string nombrePila);
    void trasladarPacienteAPila2(NodoPaciente* paciente, string nombrePila);
    string atencionMedicaAleatoria();
    string atencionMedicaAleatoriaEspecificaNormal();
    string atencionMedicaAleatoriaEspecificaLeve();
    int tiempoDeEsperaCodigoAzul();
    int tiempoDeEsperaEstabilidadUrgente();
    int tiempoDeEsperaUrgenciasNormales();
    int tiempoDeEsperaUrgenciasLeves();
    int tiempoDeEsperaAtencionMedica1();

    stack<NodoPaciente*> pilaCodigoAzul1;
    stack<NodoPaciente*> pilaEstabilidadUrgente1;
    stack<NodoPaciente*> pilaUrgenciasNormales1;
    stack<NodoPaciente*> pilaUrgenciasLeves1;

    stack<NodoPaciente*> pilaCodigoAzul2;
    stack<NodoPaciente*> pilaEstabilidadUrgente2;
    stack<NodoPaciente*> pilaUrgenciasNormales2;
    stack<NodoPaciente*> pilaUrgenciasLeves2;

};


#endif //SISTEMAMEDICODEEMERGENCIAS_ATENCIONMEDICA_H
