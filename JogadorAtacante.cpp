#include "JogadorAtacante.h"

JogadorAtacante::JogadorAtacante(std::string nome, int idade, int habilidade, int gols, int camisa,int finalizacao, int drible, int velocidade) : Jogador(nome, idade, habilidade, gols, camisa){
    this->finalizacao = finalizacao;
    this->drible = drible;
    this->velocidade = velocidade;
}

int JogadorAtacante::getFinalizacao(){
    return this->finalizacao;
}

int JogadorAtacante::getDrible(){
    return this->drible;
}

int JogadorAtacante::getVelocidade(){
    return this->velocidade;
}

void JogadorAtacante::setFinalizacao(int finalizacao){
    this->finalizacao = finalizacao;
}

void JogadorAtacante::setDrible(int drible){
    this->drible = drible;
}

void JogadorAtacante::setVelocidade(int velocidade){
    this->velocidade = velocidade;
}