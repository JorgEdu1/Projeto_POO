#include "Partidas.h"
#include <iostream>
#include <sstream>
using namespace std;

Partidas::Partidas(Time* casa, Time* visitante, int d, string m, int y):DateBasic(d,m,y){
    //dataJogo = data;
    timeCasa = casa;
    timeVisitante = visitante;
}

void Partidas::golCasa(){
    cout << "Gol do time da casa!!" << endl;
    placarCasa++;
}

void Partidas::golVisitante(){
    cout << "Gol do time visitante!!" << endl;  
    placarVisitante++;
}

void Partidas::desgolCasa(){
    placarCasa--;
}
void Partidas::desgolVisitante(){
    placarVisitante--;
}

string Partidas::getPlacar(){
    stringstream result;
    result << timeCasa->getNome() << " " << placarCasa << " X " << placarVisitante << " " << timeVisitante->getNome();
    return result.str();
}

void Partidas::fimJogo(){
    if(placarCasa > placarVisitante){
        timeCasa->somaVitorias();
        timeVisitante->somaDerrotas();
    }else if(placarCasa < placarVisitante){
        timeCasa->somaDerrotas();
        timeVisitante->somaVitorias();
    }else{
        timeCasa->somaEmpates();
        timeVisitante->somaEmpates();
    }
    cout << "FIM DE JOGO!!" << endl;
}

string Partidas::dataJogo(){
    return DateBasic::datePrint();
}