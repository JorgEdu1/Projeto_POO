#ifndef JOGADORDEFESA_H
#define JOGADORDEFESA_H

#include "Jogador.h"

class JogadorDefesa : public Jogador{
    private:
        int marcacao;
        int desarme;
    public:
        JogadorDefesa(std::string nome, int idade, int habilidade, int gols, int camisa,int marcacao, int desarme);
        int getMarcacao();
        int getDesarme();
        int getHabilidade();
        void setMarcacao(int Marcacao);
        void setDesarme(int desarme);
};

#endif