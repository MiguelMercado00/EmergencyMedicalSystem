//
// Created by Miguel Mercado on 7/10/23.
//
#include "atencionMedica.h"
#include <random>

void AtencionMedica::trasladarPacienteAPila(NodoPaciente* paciente, string nombrePila) {
    // Encolar al paciente en la pila correspondiente
    if (nombrePila == "PilaCodigoAzul") {
        pilaCodigoAzul.push(paciente);
    } else if (nombrePila == "PilaEstabilidadUrgente") {
        pilaEstabilidadUrgente.push(paciente);
    } else if (nombrePila == "PilaUrgenciasNormales") {
        pilaUrgenciasNormales.push(paciente);
    } else if (nombrePila == "PilaUrgenciasLeves") {
        pilaUrgenciasLeves.push(paciente);
    } else {
        cout << "Nombre de pila no válido." << endl;
    }
}

string AtencionMedica::atencionMedicaAleatoria() {
    // Generar un número aleatorio entre 1 y 4 con random
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(1, 2);
    int numeroAleatorio = distr(gen);

    // Según el número se elige un tipo de atención médica
    if (numeroAleatorio == 1) {
        return "Exámenes médicos";
    } else if (numeroAleatorio == 2) {
        return "Pruebas diagnósticas";
    } else {
        return "Error";
    }
}

string AtencionMedica::atencionMedicaAleatoriaEspecificaNormal() {
    // Generar un número aleatorio entre 1 y 4 con random
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(1, 2);
    int numeroAleatorio = distr(gen);

    // Según el número se elige un tipo de atención médica
    if (numeroAleatorio == 1) {
        return "Estabilización de dolencias";
    } else if (numeroAleatorio == 2) {
        return "Pruebas diagnósticas";
    } else {
        return "Error";
    }
}

string AtencionMedica::atencionMedicaAleatoriaEspecificaLeve() {
    // Generar un número aleatorio entre 1 y 4 con random
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(1, 2);
    int numeroAleatorio = distr(gen);

    // Según el número se elige un tipo de atención médica
    if (numeroAleatorio == 1) {
        return "Estabilización de dolencias";
    } else if (numeroAleatorio == 2) {
        return "Exámenes médicos";
    } else {
        return "Error";
    }
}

string AtencionMedica::tiempoDeEsperaCodigoAzul() {
    // Genera un número aleatorio entre 1 y 5 minutos
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(1, 2);
    int tiempoAleatorio = distr(gen);
    if (tiempoAleatorio == 1) {
        return "Atención inmediata.";
    } else if (tiempoAleatorio == 2) {
        return "Atención no inmediata.";
    } else {
        return "Error";
    }
}

int AtencionMedica::tiempoDeEsperaEstabilidadUrgente() {
    // Genera un número aleatorio entre 10 y 20 minutos
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(10, 30);
    int tiempoAleatorio = distr(gen);

    return tiempoAleatorio;
}

int AtencionMedica::tiempoDeEsperaUrgenciasNormales() {
    // Genera un número aleatorio entre 20 y 40 minutos
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(20, 60);
    int tiempoAleatorio = distr(gen);

    return tiempoAleatorio;
}

int AtencionMedica::tiempoDeEsperaUrgenciasLeves() {
    // Genera un número aleatorio entre 40 y 70 minutos
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(40, 100);
    int tiempoAleatorio = distr(gen);

    return tiempoAleatorio;
}






