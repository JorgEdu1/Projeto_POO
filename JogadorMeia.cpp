#include "JogadorMeia.h"

JogadorMeia::JogadorMeia(std::string nome, int idade, int habilidade, int gols, int camisa,int passe, int drible, int visao) : Jogador(nome, idade, habilidade, gols, camisa){
    this->passe = passe;
    this->drible = drible;
    this->visao = visao;
}

int JogadorMeia::getPasse(){
    return this->passe;
}

int JogadorMeia::getDrible(){
    return this->drible;
}

int JogadorMeia::getVisao(){
    return this->visao;
}

int JogadorMeia::getHabilidade(){
    return (habilidade*5) + (passe*3) + (drible*2)/10;
}

void JogadorMeia::setPasse(int passe){
    this->passe = passe;
}

void JogadorMeia::setDrible(int drible){
    this->drible = drible;
}

void JogadorMeia::setVisao(int visao){
    this->visao = visao;
}