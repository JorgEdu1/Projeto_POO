#include "Jogador.h"
using namespace std;

//Construtor padrão
Jogador::Jogador(std::string nome, int idade, int habilidade, int gols, int camisa){
    this->nome = nome;
    this->idade = idade;
    this->habilidade = habilidade;
    this->gols = 0;
    this->camisa = camisa;
}
//Gets
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

//Sets
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

//Deve somar +1 em gols sempre que um jogador fizer um gol;
void Jogador::somaGols(){
    gols++;
}
//Printa os dados do jogador;
void Jogador::printJogador(){
    std::cout << "Nome: " << getNome() << ", idade: " << getIdade() << ", habilidade: " << getHabilidade() << ", gols: " << getGols() << ", camisa: " << getCamisa() << std::endl;
}