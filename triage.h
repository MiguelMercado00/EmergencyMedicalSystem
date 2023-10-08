//
// Created by Miguel Mercado on 2/10/23.
//

#ifndef SISTEMAMEDICODEEMERGENCIAS_TRIAGE_H
#define SISTEMAMEDICODEEMERGENCIAS_TRIAGE_H
#include <iostream>
#include <string>
#include <queue>
using namespace std;



class NodoPaciente {
public:
    // Propiedades del nodo
    int id;  // Identificador del paciente
    string nombre;  // Nombre del paciente
    string apellido; // Apellido del paciente
    int edad;  // Edad del paciente
    double peso;  // Peso del paciente
    string sintoma1;  // Sintomas del paciente
    string sintoma2;  // Sintomas del paciente
    string codigoTriage;  // Código de triage del paciente
    NodoPaciente *siguiente;  // Un puntero al siguiente nodo en la lista
    NodoPaciente(int id, string nombre, string apellido, int edad, double peso, string sintoma1, string sintoma2);

};

class Triage {
public:
    string asignarTriage(string sintomas);
    void encolarPaciente(NodoPaciente* paciente);
    NodoPaciente* desencolarCodigoAzul();
    NodoPaciente* desencolarEstabilidadUrgente();
    NodoPaciente* desencolarUrgenciasNormales();
    NodoPaciente* desencolarUrgenciasLeves();

    queue<NodoPaciente*> colaCodigoAzul;
    queue<NodoPaciente*> colaEstabilidadUrgente;
    queue<NodoPaciente*> colaUrgenciasNormales;
    queue<NodoPaciente*> colaUrgenciasLeves;
private:

};




#endif //SISTEMAMEDICODEEMERGENCIAS_TRIAGE_H
