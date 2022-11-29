#include "JogadorGoleiro.h"
//Construtor
JogadorGoleiro::JogadorGoleiro(std::string nome, int idade, int habilidade, int gols, int camisa,int reflexo, int altura) : Jogador(nome, idade, habilidade, gols, camisa){
    this->reflexo = reflexo;
    this->altura = altura;
}
int JogadorGoleiro::getReflexo(){
    return this->reflexo;
}
int JogadorGoleiro::getAltura(){
    return this->altura;
}
//Faz o calculo especifico da habilidade do jogador goleiro;
int JogadorGoleiro::getHabilidade(){
    return (habilidade*5) + (((int)(altura*100))*2) + (reflexo*3)/10;
}
void JogadorGoleiro::setReflexo(int reflexo){
    this->reflexo = reflexo;
}
void JogadorGoleiro::setAltura(int altura){
    this->altura = altura;
}