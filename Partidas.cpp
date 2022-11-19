#include "Partidas.h"
#include <iostream>
using namespace std;

Partidas::Partidas(Date data, Time casa, Time visitante){
    this->data = data;
    timeCasa = casa;
    timeVisitante = visitante;
}

void Partidas::golCasa(){
    placarCasa++;
}

void Partidas::golVisitante(){
    placarVisitante++;
}

string Partidas::getPlacar(){
    string result;
    result += timeCasa.getNome() + " ";
    result += placarCasa + " X ";
    result += placarVisitante + " " + timeVisitante.getNome();
    return result;
}