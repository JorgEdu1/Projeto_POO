#include "Partidas.h"
#include <iostream>
#include <sstream>
using namespace std;

Partidas::Partidas(int data, Time casa, Time visitante){
    dataJogo = data;
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
    stringstream result;
    result << timeCasa.getNome() << " " << placarCasa << " X " << placarVisitante << " " << timeVisitante.getNome();
    return result.str();
}