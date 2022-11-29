#include "Partidas.h"
#include <iostream>
#include <sstream>
using namespace std;

/*
Construtor que inicializa os atributos de Partida com os Times recebidos, os outros atributos passados (DATAS)
são passados de forma explicita ao construtor de DateBasic para que seja colocado a data da partida.
*/
Partidas::Partidas(Time* casa, Time* visitante, int d, int m, int y):DateBasic(d,m,y){
    //dataJogo = data;
    timeCasa = casa;
    timeVisitante = visitante;
}

string Partidas::getCasa(){
    return timeCasa->getNome();
}
string Partidas::getVisitante(){
    return timeVisitante->getNome();
} 
//Adiciona um gol no contador do time da casa.
void Partidas::golCasa(){
    cout << "Gol do time da casa!!" << endl;
    placarCasa++;
}
//Adiciona um gol no contador do time visitante.
void Partidas::golVisitante(){
    cout << "Gol do time visitante!!" << endl;  
    placarVisitante++;
}
//Esse metodo chama um metodo da classe Time, para retornar o nome do time. Lógica de StringStream para retornar uma string.
string Partidas::getPlacar(){
    stringstream result;
    result << timeCasa->getNome() << " " << placarCasa << " X " << placarVisitante << " " << timeVisitante->getNome();
    return result.str();
}
//Esse metodo faz comparações com os placares, dependendo do que tiver acontecido na partida
//ele chama metodos diferentes da classe Time para fazer alterações no contador geral de vitorias, derrotas e empates
//e anuncia o fim de jogo.
void Partidas::fimJogo(){
    if(placarCasa > placarVisitante){
        timeCasa->somaVitorias();
        timeVisitante->somaDerrotas();
    }else if(placarCasa < placarVisitante){
        timeCasa->somaDerrotas();
        timeVisitante->somaVitorias();
    }else{
        timeCasa->somaEmpates();
        timeVisitante->somaEmpates();
    }
    cout << "FIM DE JOGO!!" << endl;
}
//Esse metodo chama um metodo da classe DateBasic para que seja retornado ao chamador a data do jogo em questão.
string Partidas::dataJogo(){
    return DateBasic::datePrint();
}