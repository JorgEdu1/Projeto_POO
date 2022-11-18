#ifndef JOGADOR_H
#define JOGADOR_H

#include <iostream>
#include <string>

class Jogador{
private:
    std::string nome;
    int idade;
    int habilidade;
    int gols;
    int camisa;
public:
    Jogador(std::string nome, int idade, int habilidade, int gols, int camisa);
    std::string getNome();
    int getIdade();
    int getHabilidade();
    int getGols();
    int getCamisa();
    void setNome(std::string nome);
    void setIdade(int idade);
    void setHabilidade(int habilidade);
    void setGols(int gols);
    void setCamisa(int camisa);
};

#endif
