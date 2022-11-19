#ifndef JOGADOR_H
#define JOGADOR_H

#include <iostream>
#include <string>

class Jogador{
protected:
    int habilidade; //Atributo protegido como pedido no projeto
private:
    std::string nome;
    int idade;
    int gols;
    int camisa;
public:
    Jogador() = default;
    Jogador(std::string nome, int idade, int habilidade, int gols, int camisa);
    std::string getNome();
    int getIdade();
    virtual int getHabilidade(); //Metodo virtual como pedido no projeto
    int getGols();
    int getCamisa();
    void setNome(std::string nome);
    void setIdade(int idade);
    void setHabilidade(int habilidade);
    void setGols(int gols);
    void setCamisa(int camisa);
    void somaGols();
    void printJogador();
};

#endif
