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
        Partidas(Time*,Time*,int,int,int);
        std::string getCasa();
        std::string getVisitante(); 
        void golCasa();
        void golVisitante();
        std::string getPlacar();
        void fimJogo();
        std::string dataJogo();

};

#endif