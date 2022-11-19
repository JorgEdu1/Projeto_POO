#include "JogadorGoleiro.h"

JogadorGoleiro::JogadorGoleiro(std::string nome, int idade, int habilidade, int gols, int camisa,int reflexo, int agilidade, int altura) : Jogador(nome, idade, habilidade, gols, camisa){
    this->reflexo = reflexo;
    this->agilidade = agilidade;
    this->altura = altura;
}

int JogadorGoleiro::getReflexo(){
    return this->reflexo;
}

int JogadorGoleiro::getAgilidade(){
    return this->agilidade;
}

int JogadorGoleiro::getAltura(){
    return this->altura;
}

void JogadorGoleiro::setReflexo(int reflexo){
    this->reflexo = reflexo;
}

void JogadorGoleiro::setAgilidade(int agilidade){
    this->agilidade = agilidade;
}

void JogadorGoleiro::setAltura(int altura){
    this->altura = altura;
}