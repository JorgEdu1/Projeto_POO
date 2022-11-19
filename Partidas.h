#ifndef PARTIDAS_H
#define PARTIDAS_H
#include <iostream>
#include <string>
//#include "Date.h"
#include "Time.h"

class Partidas:public Time{
    private:
        int dataJogo;
        Time timeCasa;
        Time timeVisitante;
        int placarCasa = 0; //começando a partida com 0 X 0
        int placarVisitante = 0;

    public:
        Partidas(int,Time,Time);
        void golCasa();
        void golVisitante();
        std::string getPlacar();

};

#endif