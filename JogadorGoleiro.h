#ifndef JOGADORGOLEIRO_H
#define JOGADORGOLEIRO_H

#include "Jogador.h"

class JogadorGoleiro : public Jogador{
    private:
        int reflexo;
        int altura;
    public:
        JogadorGoleiro(std::string nome, int idade, int habilidade, int gols, int camisa,int reflexo, int altura);
        int getReflexo();
        int getAltura();
        int getHabilidade();
        void setReflexo(int reflexo);
        void setAltura(int altura);
};

#endif