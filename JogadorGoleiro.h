#ifndef JOGADORGOLEIRO_H
#define JOGADORGOLEIRO_H

#include "Jogador.h"

class JogadorGoleiro : public Jogador{
    private:
        int reflexo;
        int agilidade;
        int altura;
    public:
        JogadorGoleiro(std::string nome, int idade, int habilidade, int gols, int camisa,int reflexo, int agilidade, int altura);
        int getReflexo();
        int getAgilidade();
        int getAltura();
        void setReflexo(int reflexo);
        void setAgilidade(int agilidade);
        void setAltura(int altura);
};

#endif