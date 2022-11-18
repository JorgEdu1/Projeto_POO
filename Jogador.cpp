#include "Jogador.h"

Jogador::Jogador(std::string nome, int idade, int habilidade, int gols, int camisa){
    this->nome = nome;
    this->idade = idade;
    this->habilidade = habilidade;
    this->gols = gols;
    this->camisa = camisa;
}
std::string Jogador::getNome(){
    return this->nome;
}
int Jogador::getIdade(){
    return this->idade;
}
int Jogador::getHabilidade(){
    return this->habilidade;
}
int Jogador::getGols(){
    return this->gols;
}
int Jogador::getCamisa(){
    return this->camisa;
}
void Jogador::setNome(std::string nome){
    this->nome = nome;
}
void Jogador::setIdade(int idade){
    this->idade = idade;
}
void Jogador::setHabilidade(int habilidade){
    this->habilidade = habilidade;
}
void Jogador::setGols(int gols){
    this->gols = gols;
}
void Jogador::setCamisa(int camisa){
    this->camisa = camisa;
}