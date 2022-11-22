#ifndef PARTIDAS_H
#define PARTIDAS_H
#include <iostream>
#include <string>
#include "DateBasic.h"
#include "Time.h"

class Partidas:public Time, DateBasic{
    private:
        Time* timeCasa;
        Time* timeVisitante;
        int placarCasa = 0; //começando a partida com 0 X 0
        int placarVisitante = 0;

    public:
        Partidas(Time*,Time*,int,std::string,int);
        // ~Partidas() = default;
        void golCasa();
        void golVisitante();
        void desgolCasa();
        void desgolVisitante();
        std::string getPlacar();
        void fimJogo();
        std::string dataJogo();

};

#endif