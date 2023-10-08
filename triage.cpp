//
// Created by Miguel Mercado on 2/10/23.
//

#include "triage.h"

string Triage::asignarTriage(string sintomas) {
    // Asignación de triage basado en los síntomas

    // Verificación para "Código Azul"
    if (sintomas.find("Paro cardíaco") != string::npos ||
        sintomas.find("Paro respiratorio shock") != string::npos ||
        sintomas.find("Convulsión") != string::npos ||
        sintomas.find("Pérdida de un órgano") != string::npos ||
        sintomas.find("Pérdida de un miembro") != string::npos) {
        return "Código Azul";
    }

        // Verificación para "Estabilidad Urgente"
    else if (sintomas.find("Taquicardia") != string::npos ||
             sintomas.find("Presión alta con dolor de cabeza") != string::npos ||
                sintomas.find("Pérdida del equilibrio") != string::npos ||
                sintomas.find("Asfixia severa") != string::npos ||
                sintomas.find("Hemorragias") != string::npos ||
                sintomas.find("Dolor extremo") != string::npos ||
                sintomas.find("Intoxicación") != string::npos) {
        return "Estabilidad Urgente";
    }

        // Verificación para "Urgencias Normales"
    else if (sintomas.find("Dolor en el pecho") != string::npos ||
             sintomas.find("Palpitaciones") != string::npos ||
                sintomas.find("Presión Alta") != string::npos ||
                sintomas.find("Asfixia leve") != string::npos ||
                sintomas.find("Trauma nasal") != string::npos) {
        return "Urgencias Normales";
    }

        // Verificación para "Urgencias Menores"
    else if (sintomas.find("Amigdalitis") != string::npos ||
             sintomas.find("Faringitis") != string::npos ||
             sintomas.find("Diarrea sin deshidratación") != string::npos ||
             sintomas.find("Presión alta descontrolada") != string::npos) {
        return "Urgencias Leves";
    }

        // Si no se cumple ninguna condición, es "No urgente"
    else {
        return "No urgente";
    }
}

NodoPaciente::NodoPaciente(int id, string nombre, string apellido, int edad, double peso, string sintoma1, string sintoma2) :

id(id), nombre(nombre), apellido(apellido), edad(edad), peso(peso), sintoma1(sintoma1), sintoma2(sintoma2) {
    Triage triageAssigner;
    codigoTriage = triageAssigner.asignarTriage(sintoma1);
}

void Triage::encolarPaciente(NodoPaciente* paciente) {
    // Encolar al paciente en la cola correspondiente según su triage asignado
    if (paciente->codigoTriage == "Código Azul") {
        colaCodigoAzul.push(paciente);
    } else if (paciente->codigoTriage == "Estabilidad Urgente") {
        colaEstabilidadUrgente.push(paciente);
    } else if (paciente->codigoTriage == "Urgencias Normales") {
        colaUrgenciasNormales.push(paciente);
    } else if (paciente->codigoTriage == "Urgencias Leves") {
        colaUrgenciasLeves.push(paciente);
    }
}

NodoPaciente* Triage::desencolarCodigoAzul() {
    if (colaCodigoAzul.empty()) {
        return nullptr; // La cola está vacía
    }

    // Desencolar al paciente de la cola correspondiente según su triage asignado
    NodoPaciente* paciente = colaCodigoAzul.front();
    colaCodigoAzul.pop();
    return paciente;
}

NodoPaciente* Triage::desencolarEstabilidadUrgente() {
    if (colaEstabilidadUrgente.empty()) {
        return nullptr; // La cola está vacía
    }

    // Desencolar al paciente de la cola correspondiente según su triage asignado
    NodoPaciente* paciente = colaEstabilidadUrgente.front();
    colaEstabilidadUrgente.pop();
    return paciente;
}

NodoPaciente* Triage::desencolarUrgenciasNormales() {
    if (colaUrgenciasNormales.empty()) {
        return nullptr; // La cola está vacía
    }

    // Desencolar al paciente de la cola correspondiente según su triage asignado
    NodoPaciente* paciente = colaUrgenciasNormales.front();
    colaUrgenciasNormales.pop();
    return paciente;
}

NodoPaciente* Triage::desencolarUrgenciasLeves() {
    if (colaUrgenciasLeves.empty()) {
        return nullptr; // La cola está vacía
    }

    // Desencolar al paciente de la cola correspondiente según su triage asignado
    NodoPaciente* paciente = colaUrgenciasLeves.front();
    colaUrgenciasLeves.pop();
    return paciente;
}


