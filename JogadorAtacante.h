#ifndef JOGADORATACANTE_H
#define JOGADORATACANTE_H
#include "Jogador.h"

class JogadorAtacante : public Jogador{
    private:
        int finalizacao;
        int drible;
        int velocidade;
    public:
        JogadorAtacante(std::string nome, int idade, int habilidade, int gols, int camisa,int finalizacao, int drible, int velocidade);
        int getFinalizacao();
        int getDrible();
        int getVelocidade();
        int getHabilidade();
        void setFinalizacao(int finalizacao);
        void setDrible(int drible);
        void setVelocidade(int velocidade);
};

#endif