//
// Created by Miguel Mercado on 2/10/23.
//

#include "triage.h"
#include "atencionMedica.h"
#include "salidaDelPaciente.h"
#include <random>

int main() {

    Triage triage;
    AtencionMedica atencionMedica;
    salidaDelPaciente salidaDelPaciente;

    // Pool de 20 pacientes generados de forma aleatoria
    NodoPaciente paciente1(1, "Juan", "Perez", 30, 70.5, "Paro cardíaco", "Paro respiratorio shock");
    paciente1.codigoTriage = triage.asignarTriage("Paro cardíaco, Paro respiratorio shock");
    triage.encolarPaciente(&paciente1);

    NodoPaciente paciente2(2, "Pedro", "Ruiz", 23, 66.5, "Dolor en el pecho", "Presión Alta");
    paciente2.codigoTriage = triage.asignarTriage("Dolor en el pecho, Presión Alta");
    triage.encolarPaciente(&paciente2);

    NodoPaciente paciente3(3, "Maria", "Gonzalez", 45, 60.5, "Amigdalitis", "Faringitis");
    paciente3.codigoTriage = triage.asignarTriage("Amigdalitis, Faringitis");
    triage.encolarPaciente(&paciente3);

    NodoPaciente paciente4(4, "Jose", "Garcia", 50, 80.5, "Dolor extremo", "Perdida del equilibrio");
    paciente4.codigoTriage = triage.asignarTriage("Dolor extremo, Perdida del equilibrio");
    triage.encolarPaciente(&paciente4);

    NodoPaciente paciente5(5, "Miguel", "Mercado", 18, 75, "Trauma nasal", "Asfixia leve");
    paciente5.codigoTriage = triage.asignarTriage("Trauma nasal, Asfixia leve");
    triage.encolarPaciente(&paciente5);

    NodoPaciente paciente6(6, "Mario", "López", 47, 70.5, "Taquicardia", "Presión alta con dolor de cabeza");
    paciente6.codigoTriage = triage.asignarTriage("Taquicardia, Presión alta con dolor de cabeza");
    triage.encolarPaciente(&paciente6);

    NodoPaciente paciente7(7, "Luis", "Gonzalez", 45, 60.5, "Pérdida de un miembro", "Convulsión");
    paciente7.codigoTriage = triage.asignarTriage("Pérdida de un miembro, Convulsión");
    triage.encolarPaciente(&paciente7);

    NodoPaciente paciente8(8, "Andres", "Garcia", 50, 80.5, "Diarrea sin deshidratación", "Amigdalitis");
    paciente8.codigoTriage = triage.asignarTriage("Diarrea sin deshidratación, Amigdalitis");
    triage.encolarPaciente(&paciente8);

    NodoPaciente paciente9(9, "Romario", "Salgado", 23, 87, "Presión alta descontrolada", "Faringitis");
    paciente9.codigoTriage = triage.asignarTriage("Presión alta descontrolada, Faringitis");
    triage.encolarPaciente(&paciente9);

    NodoPaciente paciente10(10, "Julio", "Restrepo", 19, 65, "Faringitis", "Presión alta descontrolada");
    paciente10.codigoTriage = triage.asignarTriage("Faringitis, Presión alta descontrolada");
    triage.encolarPaciente(&paciente10);

    NodoPaciente paciente11(11, "Jorge", "López", 50, 80.5, "Presión Alta", "Palpitaciones");
    paciente11.codigoTriage = triage.asignarTriage("Presión Alta, Palpitaciones");
    triage.encolarPaciente(&paciente11);

    NodoPaciente paciente12(12, "Luna", "Gonzales", 30, 60.5, "Diarrea sin desidrateción", "Palpitaciones");
    paciente12.codigoTriage = triage.asignarTriage("Diarrea sin desidrateción, Palpitaciones");
    triage.encolarPaciente(&paciente12);

    NodoPaciente paciente13(13, "Raul", "Pérez", 34, 76.5, "Amigdalitis", "Presión alta descontrolada");
    paciente13.codigoTriage = triage.asignarTriage("Amigdalitis, Presión alta descontrolada");
    triage.encolarPaciente(&paciente13);

    NodoPaciente paciente14(14, "Luisa", "Garcia", 38, 80.5, "Dolor extremo", "Perdida del equilibrio");
    paciente14.codigoTriage = triage.asignarTriage("Dolor extremo, Perdida del equilibrio");
    triage.encolarPaciente(&paciente14);

    NodoPaciente paciente15(15, "Andrea", "Garcia", 50, 80.5, "Diarrea sin deshidratación", "Amigdalitis");
    paciente15.codigoTriage = triage.asignarTriage("Diarrea sin deshidratación, Amigdalitis");
    triage.encolarPaciente(&paciente15);

    NodoPaciente paciente16(16, "Julio", "Martinez", 23, 82, "Asfixia leve", "Trauma nasal");
    paciente16.codigoTriage = triage.asignarTriage("Asfixia leve, Trauma nasal");
    triage.encolarPaciente(&paciente16);

    NodoPaciente paciente17(17, "Jorge", "Marquez", 23, 80.5, "Hemorragias", "Dolor extremo");
    paciente17.codigoTriage = triage.asignarTriage("Hemorragias, Dolor extremo");
    triage.encolarPaciente(&paciente17);

    NodoPaciente paciente18(18, "Samuel", "Marquez", 26, 78.5, "Presión alta descontrolada", "Diarrea sin desidratación");
    paciente18.codigoTriage = triage.asignarTriage("Presión alta descontrolada, Diarrea sin desidratación");
    triage.encolarPaciente(&paciente18);

    NodoPaciente paciente19(19, "Sofia", "Florez", 23, 65.5, "Convulsión", "Paro respiratorio shock");
    paciente19.codigoTriage = triage.asignarTriage("Convulsión, Paro respiratorio shock");
    triage.encolarPaciente(&paciente19);

    NodoPaciente paciente20(20, "Mateo", "Dominguez", 23, 80.5, "Amigdalitis", "Faringitis");
    paciente20.codigoTriage = triage.asignarTriage("Amigdalitis, Faringitis");
    triage.encolarPaciente(&paciente20);



    cout << "---------------------------------------------------- Pacientes y sus sintomas ----------------------------------------------------" << endl;
    cout << "" << endl;

    cout << "Paciente 1: " << paciente1.nombre << " " << paciente1.apellido << ", Sintomas: " << paciente1.sintoma1 << ", " << paciente1.sintoma2 << endl;
    cout << "Paciente 2: " << paciente2.nombre << " " << paciente2.apellido << ", Sintomas: " << paciente2.sintoma1 << ", " << paciente2.sintoma2 << endl;
    cout << "Paciente 3: " << paciente3.nombre << " " << paciente3.apellido << ", Sintomas: " << paciente3.sintoma1 << ", " << paciente3.sintoma2 << endl;
    cout << "Paciente 4: " << paciente4.nombre << " " << paciente4.apellido << ", Sintomas: " << paciente4.sintoma1 << ", " << paciente4.sintoma2 << endl;
    cout << "Paciente 5: " << paciente5.nombre << " " << paciente5.apellido << ", Sintomas: " << paciente5.sintoma1 << ", " << paciente5.sintoma2 << endl;
    cout << "Paciente 6: " << paciente6.nombre << " " << paciente6.apellido << ", Sintomas: " << paciente6.sintoma1 << ", " << paciente6.sintoma2 << endl;
    cout << "Paciente 7: " << paciente7.nombre << " " << paciente7.apellido << ", Sintomas: " << paciente7.sintoma1 << ", " << paciente7.sintoma2 << endl;
    cout << "Paciente 8: " << paciente8.nombre << " " << paciente8.apellido << ", Sintomas: " << paciente8.sintoma1 << ", " << paciente8.sintoma2 << endl;
    cout << "Paciente 9: " << paciente9.nombre << " " << paciente9.apellido << ", Sintomas: " << paciente9.sintoma1 << ", " << paciente9.sintoma2 << endl;
    cout << "Paciente 10: " << paciente10.nombre << " " << paciente10.apellido << ", Sintomas: " << paciente10.sintoma1 << ", " << paciente10.sintoma2 << endl;
    cout << "Paciente 11: " << paciente11.nombre << " " << paciente11.apellido << ", Sintomas: " << paciente11.sintoma1 << ", " << paciente11.sintoma2 << endl;
    cout << "Paciente 12: " << paciente12.nombre << " " << paciente12.apellido << ", Sintomas: " << paciente12.sintoma1 << ", " << paciente12.sintoma2 << endl;
    cout << "Paciente 13: " << paciente13.nombre << " " << paciente13.apellido << ", Sintomas: " << paciente13.sintoma1 << ", " << paciente13.sintoma2 << endl;
    cout << "Paciente 14: " << paciente14.nombre << " " << paciente14.apellido << ", Sintomas: " << paciente14.sintoma1 << ", " << paciente14.sintoma2 << endl;
    cout << "Paciente 15: " << paciente15.nombre << " " << paciente15.apellido << ", Sintomas: " << paciente15.sintoma1 << ", " << paciente15.sintoma2 << endl;
    cout << "Paciente 16: " << paciente16.nombre << " " << paciente16.apellido << ", Sintomas: " << paciente16.sintoma1 << ", " << paciente16.sintoma2 << endl;
    cout << "Paciente 17: " << paciente17.nombre << " " << paciente17.apellido << ", Sintomas: " << paciente17.sintoma1 << ", " << paciente17.sintoma2 << endl;
    cout << "Paciente 18: " << paciente18.nombre << " " << paciente18.apellido << ", Sintomas: " << paciente18.sintoma1 << ", " << paciente18.sintoma2 << endl;
    cout << "Paciente 19: " << paciente19.nombre << " " << paciente19.apellido << ", Sintomas: " << paciente19.sintoma1 << ", " << paciente19.sintoma2 << endl;
    cout << "Paciente 20: " << paciente20.nombre << " " << paciente20.apellido << ", Sintomas: " << paciente20.sintoma1 << ", " << paciente20.sintoma2 << endl;


    cout << "" << endl;
    cout << "---------------------------------------------------- Triage ----------------------------------------------------" << endl;
    cout << "Cola número 1." << endl;
    cout << "" << endl;


    cout << "Pacientes de Cola Código Azul:" << endl;
    while (!triage.colaCodigoAzul.empty()) {
        NodoPaciente* paciente = triage.desencolarCodigoAzul();
        // Imprimir la información del paciente
        cout << "- ID: " << paciente->id << ", Nombre: " << paciente->nombre << ", Apellido: " << paciente->apellido << std::endl;
        atencionMedica.trasladarPacienteAPila1(paciente, "PilaCodigoAzul");
    }

    cout << "" << endl;

    cout << "Pacientes de Cola Estabilidad Urgente:" << endl;
    while (!triage.colaEstabilidadUrgente.empty()) {
        NodoPaciente* paciente = triage.desencolarEstabilidadUrgente();
        // Imprimir la información del paciente
        cout << "- ID: " << paciente->id << ", Nombre: " << paciente->nombre << ", Apellido: " << paciente->apellido << std::endl;
        atencionMedica.trasladarPacienteAPila1(paciente, "PilaEstabilidadUrgente");
    }

    cout << "" << endl;

    cout << "Pacientes de Cola Urgencias Normales:" << endl;
    while (!triage.colaUrgenciasNormales.empty()) {
        NodoPaciente* paciente = triage.desencolarUrgenciasNormales();
        // Imprimir la información del paciente
        cout << "- ID: " << paciente->id << ", Nombre: " << paciente->nombre << ", Apellido: " << paciente->apellido << std::endl;
        atencionMedica.trasladarPacienteAPila1(paciente, "PilaUrgenciasNormales");
    }

    cout << "" << endl;

    cout << "Pacientes de Cola Urgencias Leves:" << endl;
    while (!triage.colaUrgenciasLeves.empty()) {
        NodoPaciente* paciente = triage.desencolarUrgenciasLeves();
        // Imprimir la información del paciente
        cout << "- ID: " << paciente->id << ", Nombre: " << paciente->nombre << ", Apellido: " << paciente->apellido << std::endl;
        atencionMedica.trasladarPacienteAPila1(paciente, "PilaUrgenciasLeves");
    }

    cout << "" << endl;
    cout << "---------------------------------------------------- Atención Medica #1 (obligatoria) ----------------------------------------------------" << endl;
    cout << "Pila número 1." << endl;
    cout << "" << endl;

    cout << "Pacientes de Pila Código Azul:" << endl;
    while (!atencionMedica.pilaCodigoAzul1.empty()) {
        NodoPaciente* paciente = atencionMedica.pilaCodigoAzul1.top();
        // Imprimir la información del paciente
        cout << "- ID: " << paciente->id << ", Nombre: " << paciente->nombre << ", Apellido: " << paciente->apellido << ", Atención Médica #1: Estabilización de dolencias y monitoreo de signos vitales durante " << atencionMedica.tiempoDeEsperaAtencionMedica1() << " minutos." << endl;
        // Ahora se traslada a la atención médica #2
        atencionMedica.trasladarPacienteAPila2(paciente, "PilaCodigoAzul");
        atencionMedica.pilaCodigoAzul1.pop();
    }

    cout << "" << endl;

    cout << "Pacientes de Pila Estabilidad Urgente:" << endl;
    while (!atencionMedica.pilaEstabilidadUrgente1.empty()) {
        NodoPaciente* paciente = atencionMedica.pilaEstabilidadUrgente1.top();
        // Imprimir la información del paciente
        cout << "- ID: " << paciente->id << ", Nombre: " << paciente->nombre << ", Apellido: " << paciente->apellido << ", Atención Médica #1: Estabilización de dolencias y monitoreo de signos vitales durante " << atencionMedica.tiempoDeEsperaAtencionMedica1() << " minutos." << endl;
        // Ahora se traslada a la atención médica #2
        atencionMedica.trasladarPacienteAPila2(paciente, "PilaEstabilidadUrgente");
        atencionMedica.pilaEstabilidadUrgente1.pop();
    }

    cout << "" << endl;

    cout << "Pacientes de Pila Urgencias Normales:" << endl;
    while (!atencionMedica.pilaUrgenciasNormales1.empty()) {
        NodoPaciente* paciente = atencionMedica.pilaUrgenciasNormales1.top();
        // Imprimir la información del paciente
        cout << "- ID: " << paciente->id << ", Nombre: " << paciente->nombre << ", Apellido: " << paciente->apellido << ", Atención Médica: Exámenes médicos." << endl;
        // Ahora se traslada a la atención médica #2
        atencionMedica.trasladarPacienteAPila2(paciente, "PilaUrgenciasNormales");
        atencionMedica.pilaUrgenciasNormales1.pop();
    }

    cout << "" << endl;

    cout << "Pacientes de Pila Urgencias Leves:" << endl;
    while (!atencionMedica.pilaUrgenciasLeves1.empty()) {
        NodoPaciente* paciente = atencionMedica.pilaUrgenciasLeves1.top();
        // Imprimir la información del paciente
        cout << "- ID: " << paciente->id << ", Nombre: " << paciente->nombre << ", Apellido: " << paciente->apellido << ", Atención Médica: Pruebas diagnósticas." << endl;
        // Ahora se traslada a la atención médica #2
        atencionMedica.trasladarPacienteAPila2(paciente, "PilaUrgenciasLeves");
        atencionMedica.pilaUrgenciasLeves1.pop();
    }

    cout << "" << endl;
    cout << "---------------------------------------------------- Atención Medica #2 (Aleatoria) ----------------------------------------------------" << endl;
    cout << "Pila número 2." << endl;
    cout << "" << endl;

    cout << "Pacientes de Pila Código Azul:" << endl;
    while (!atencionMedica.pilaCodigoAzul2.empty()) {
        NodoPaciente* paciente = atencionMedica.pilaCodigoAzul2.top();
        // Imprimir la información del paciente
        cout << "- ID: " << paciente->id << ", Nombre: " << paciente->nombre << ", Apellido: " << paciente->apellido << ", Atención Médica #2: " << atencionMedica.atencionMedicaAleatoria() << endl;
        salidaDelPaciente.encolarPaciente(paciente);
        atencionMedica.pilaCodigoAzul2.pop();
    }

    cout << "" << endl;

    cout << "Pacientes de Pila Estabilidad Urgente:" << endl;
    while (!atencionMedica.pilaEstabilidadUrgente2.empty()) {
        NodoPaciente* paciente = atencionMedica.pilaEstabilidadUrgente2.top();
        // Imprimir la información del paciente
        cout << "- ID: " << paciente->id << ", Nombre: " << paciente->nombre << ", Apellido: " << paciente->apellido << ", Atención Médica #2: " << atencionMedica.atencionMedicaAleatoria() << endl;
        salidaDelPaciente.encolarPaciente(paciente);
        atencionMedica.pilaEstabilidadUrgente2.pop();
    }

    cout << "" << endl;

    cout << "Pacientes de Pila Urgencias Normales:" << endl;
    while (!atencionMedica.pilaUrgenciasNormales2.empty()) {
        NodoPaciente* paciente = atencionMedica.pilaUrgenciasNormales2.top();
        // Imprimir la información del paciente
        cout << "- ID: " << paciente->id << ", Nombre: " << paciente->nombre << ", Apellido: " << paciente->apellido << ", Atención Médica #2: " << atencionMedica.atencionMedicaAleatoriaEspecificaNormal() << endl;
        salidaDelPaciente.encolarPaciente(paciente);
        atencionMedica.pilaUrgenciasNormales2.pop();
    }

    cout << "" << endl;

    cout << "Pacientes de Pila Urgencias Leves:" << endl;
    while (!atencionMedica.pilaUrgenciasLeves2.empty()) {
        NodoPaciente* paciente = atencionMedica.pilaUrgenciasLeves2.top();
        // Imprimir la información del paciente
        cout << "- ID: " << paciente->id << ", Nombre: " << paciente->nombre << ", Apellido: " << paciente->apellido << ", Atención Médica #2: " << atencionMedica.atencionMedicaAleatoriaEspecificaLeve() << endl;
        salidaDelPaciente.encolarPaciente(paciente);
        atencionMedica.pilaUrgenciasLeves2.pop();
    }

    cout << "" << endl;
    cout << "---------------------------------------------------- Salida del paciente ----------------------------------------------------" << endl;
    cout << "Cola número 2." << endl;
    cout << "" << endl;

    cout << "Cola de salida de pacientes de Código Azul:" << endl;
    while (!salidaDelPaciente.colaSalidaCodigoAzul.empty()) {
        NodoPaciente* paciente = salidaDelPaciente.colaSalidaCodigoAzul.front();
        // Imprimir la información del paciente
        int tiempoEsperaPaciente = atencionMedica.tiempoDeEsperaCodigoAzul();
        cout << "- ID: " << paciente->id << ", Nombre: " << paciente->nombre << ", Apellido: " << paciente->apellido << ", Tiempo de espera: " << tiempoEsperaPaciente << " minutos." << endl;
        if (tiempoEsperaPaciente > 5) {
            cout << "El paciente ha muerto. (Morgue)" << endl;
        } else {
            // Se genera un número random
            random_device rd;
            mt19937 gen(rd());
            uniform_int_distribution<> distr(1, 2);
            int numeroAleatorio = distr(gen);

            // Según el número se elige un tipo de atención médica
            if (numeroAleatorio == 1) {
                cout << "Remitido para hospitalización" << endl;
            } else if (numeroAleatorio == 2) {
                cout << "Remitido a médico especialista" << endl;
            } else {
                cout << "Error" << endl;
            }

        }
        salidaDelPaciente.colaSalidaCodigoAzul.pop();
    }

    cout << "" << endl;

    cout << "Cola de salida de pacientes de Estabilidad Urgente:" << endl;
    while (!salidaDelPaciente.colaSalidaEstabilidadUrgente.empty()) {
        NodoPaciente* paciente = salidaDelPaciente.colaSalidaEstabilidadUrgente.front();
        // Imprimir la información del paciente
        int tiempoEsperaPaciente = atencionMedica.tiempoDeEsperaEstabilidadUrgente();
        cout << "- ID: " << paciente->id << ", Nombre: " << paciente->nombre << ", Apellido: " << paciente->apellido << ", Tiempo de espera: " << tiempoEsperaPaciente << " minutos." << endl;
        if (tiempoEsperaPaciente > 20) {
            cout << "El paciente ha muerto. (Morgue)" << endl;
        } else {
            // Se genera un número random
            random_device rd;
            mt19937 gen(rd());
            uniform_int_distribution<> distr(1, 2);
            int numeroAleatorio = distr(gen);

            // Según el número se elige un tipo de atención médica
            if (numeroAleatorio == 1) {
                cout << "Remitido para hospitalización" << endl;
            } else if (numeroAleatorio == 2) {
                cout << "Remitido a médico especialista" << endl;
            } else {
                cout << "Error" << endl;
            }

        }
        salidaDelPaciente.colaSalidaEstabilidadUrgente.pop();
    }

    cout << "" << endl;

    cout << "Cola de salida de pacientes de Urgencias Normales:" << endl;
    while (!salidaDelPaciente.colaSalidaUrgenciasNormales.empty()) {
        NodoPaciente* paciente = salidaDelPaciente.colaSalidaUrgenciasNormales.front();
        // Imprimir la información del paciente
        int tiempoEsperaPaciente = atencionMedica.tiempoDeEsperaUrgenciasNormales();
        cout << "- ID: " << paciente->id << ", Nombre: " << paciente->nombre << ", Apellido: " << paciente->apellido << ", Tiempo de espera: " << tiempoEsperaPaciente << " minutos." << endl;
        if (tiempoEsperaPaciente > 40) {
            cout << "Alta voluntaria" << endl;
        } else {
            cout << "Alta" << endl;
        }

        salidaDelPaciente.colaSalidaUrgenciasNormales.pop();
    }

    cout << "" << endl;

    cout << "Cola de salida de pacientes de Urgencias Leves:" << endl;
    while (!salidaDelPaciente.colaSalidaUrgenciasLeves.empty()) {
        NodoPaciente* paciente = salidaDelPaciente.colaSalidaUrgenciasLeves.front();
        // Imprimir la información del paciente
        int tiempoEsperaPaciente = atencionMedica.tiempoDeEsperaUrgenciasLeves();
        cout << "- ID: " << paciente->id << ", Nombre: " << paciente->nombre << ", Apellido: " << paciente->apellido << ", Tiempo de espera: " << tiempoEsperaPaciente << " minutos." << endl;
        if (tiempoEsperaPaciente > 70) {
            cout << "Alta voluntaria" << endl;
        } else {
            cout << "Alta" << endl;
            }

        salidaDelPaciente.colaSalidaUrgenciasLeves.pop();
    }

    return 0;
}

