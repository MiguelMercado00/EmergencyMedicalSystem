//
// Created by Miguel Mercado on 7/10/23.
//
#include "atencionMedica.h"
#include <random>

void AtencionMedica::trasladarPacienteAPila1(NodoPaciente* paciente, string nombrePila) {
    // Encolar al paciente en la pila correspondiente
    if (nombrePila == "PilaCodigoAzul") {
        pilaCodigoAzul1.push(paciente);
    } else if (nombrePila == "PilaEstabilidadUrgente") {
        pilaEstabilidadUrgente1.push(paciente);
    } else if (nombrePila == "PilaUrgenciasNormales") {
        pilaUrgenciasNormales1.push(paciente);
    } else if (nombrePila == "PilaUrgenciasLeves") {
        pilaUrgenciasLeves1.push(paciente);
    } else {
        cout << "Nombre de pila no válido." << endl;
    }
}

void AtencionMedica::trasladarPacienteAPila2(NodoPaciente *paciente, string nombrePila) {
    // Encolar al paciente en la pila correspondiente
    if (nombrePila == "PilaCodigoAzul") {
        pilaCodigoAzul2.push(paciente);
    } else if (nombrePila == "PilaEstabilidadUrgente") {
        pilaEstabilidadUrgente2.push(paciente);
    } else if (nombrePila == "PilaUrgenciasNormales") {
        pilaUrgenciasNormales2.push(paciente);
    } else if (nombrePila == "PilaUrgenciasLeves") {
        pilaUrgenciasLeves2.push(paciente);
    } else {
        cout << "Nombre de pila no válido." << endl;
    }
}

string AtencionMedica::atencionMedicaAleatoria() {
    // Generar un número aleatorio entre 1 y 3 con random
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(1, 3);
    int numeroAleatorio = distr(gen);

    // Según el número se elige un tipo de atención médica
    if (numeroAleatorio == 1) {
        return "Exámenes médicos";
    } else if (numeroAleatorio == 2) {
        return "Pruebas diagnósticas";
    } else if (numeroAleatorio == 3) {
        return "Procedimientos curativos";
    }
}

string AtencionMedica::atencionMedicaAleatoriaEspecificaNormal() {
    // Generar un número aleatorio entre 1 y 3 con random
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(1, 3);
    int numeroAleatorio = distr(gen);

    // Según el número se elige un tipo de atención médica
    if (numeroAleatorio == 1) {
        return "Estabilización de dolencias y monitoreo de signos vitales";
    } else if (numeroAleatorio == 2) {
        return "Pruebas diagnósticas";
    } else if (numeroAleatorio == 3){
        return "Procedimientos curativos";
    }
}

string AtencionMedica::atencionMedicaAleatoriaEspecificaLeve() {
    // Generar un número aleatorio entre 1 y 3 con random
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(1, 3);
    int numeroAleatorio = distr(gen);

    // Según el número se elige un tipo de atención médica
    if (numeroAleatorio == 1) {
        return "Estabilización de dolencias y monitoreo de signos vitales";
    } else if (numeroAleatorio == 2) {
        return "Exámenes médicos";
    } else if (numeroAleatorio == 3) {
        return "Procedimientos curativos";
    }
}
int AtencionMedica::tiempoDeEsperaCodigoAzul() {
    // Genera un número aleatorio entre 1 y 5 minutos
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(1, 10);
    int tiempoAleatorio = distr(gen);

    return tiempoAleatorio;
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

int AtencionMedica::tiempoDeEsperaAtencionMedica1() {
    // Genera un número aleatorio entre 1 y 5 minutos
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(1, 5);
    int tiempoAleatorio = distr(gen);

    return tiempoAleatorio;
}






