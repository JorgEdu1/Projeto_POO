#include "JogadorDefesa.h"

JogadorDefesa::JogadorDefesa(std::string nome, int idade, int habilidade, int gols, int camisa,int marcacao, int desarme) : Jogador(nome, idade, habilidade, gols, camisa){
    this->marcacao = marcacao;
    this->desarme = desarme;
}

int JogadorDefesa::getMarcacao(){
    return this->marcacao;
}

int JogadorDefesa::getDesarme(){
    return this->desarme;
}

void JogadorDefesa::setMarcacao(int marcacao){
    this->marcacao = marcacao;
}

void JogadorDefesa::setDesarme(int desarme){
    this->desarme = desarme;
}