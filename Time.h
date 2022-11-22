#ifndef TIME_H
#define TIME_H
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "Jogador.h"

class Time:public Jogador{
    private:
        std::string nome;
        Jogador* jogadores[11];
        int vitorias = 0;
        int derrotas = 0; //Os 3 atributos inicializados com zero como pede o proj.
        int empates = 0;

    public:
        Time() = default;
        Time(std::string);
        //Gets
        std::string getNome();
        int getVitorias();
        int getDerrotas();
        int getEmpates();
        //Sets
        void setNome(std::string);
        void setVitorias(int);
        void setDerrotas(int);
        void setEmpates(int);
        //Metodos membros
        std::string getResultados();//ok
        void imprimeTime(); //ok
        void somaVitorias();//ok
        void somaDerrotas();//ok
        void somaEmpates();//ok
        void insJogador(Jogador *[11]);//Metodo usado para colocar jogadores no time. ok
        bool realTime(std::string); //Esse metodo retorna true se o nome do time passado estiver certo;

        bool realPlayer(std::string); //Esse metodo retorna true se o jogador estiver no time

        int getHabilidade(std::string); //Esse metodo retorna a habilidade do jogador passado
        

};
#endif