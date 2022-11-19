#ifndef JOGADORMEIA_H
#define JOGADORMEIA_H

#include "Jogador.h"

class JogadorMeia : public Jogador{
    private:
        int passe;
        int drible;
        int visao;
    public:
        JogadorMeia(std::string nome, int idade, int habilidade, int gols, int camisa,int passe, int drible, int visao);
        int getPasse();
        int getDrible();
        int getVisao();
        void setPasse(int passe);
        void setDrible(int drible);
        void setVisao(int velocidade);
};

#endif